

loader:
	nasm -f elf -o loaderasm.o loader.asm
	gcc -m32 -o loader.o -c loader.c -fno-stack-protector
	ld -T linker.ld  -o kernel.bin loader.o loaderasm.o -m elf_i386
