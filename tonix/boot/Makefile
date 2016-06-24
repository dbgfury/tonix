

loader:
    nasm -f elf -o loaderasm.o loader.asm
    gcc -o loader.o -c loader.c
    ld ¨CT linker.ld  -o kernel.bin loader.o loaderasm.o 