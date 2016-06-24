global loader
extern kernel_entry

MODULEALIGN equ  1<<0
MEMINFO     equ  1<<1
FLAGS       equ  MODULEALIGN | MEMINFO
MAGIC       equ  0x1BADB002
CHECKSUM    equ -(MAGIC + FLAGS)

section .text
align 4
MultiBootHeader:
   dd MAGIC
   dd FLAGS
   dd CHECKSUM

STACKSIZE equ 0x4000
loader:
   mov esp, stack+STACKSIZE
   finit
   push eax
   push ebx
   call  kernel_entry
   cli
unlimited:
   hlt
   jmp unlimited

section .bss
align 32
stack:
