nasm -f elf32 kernel.asm -o kernelasm.o
gcc -m32 -c kernel.c -o kernel.o -ffreestanding
ld -m elf_i386 -T link.ld -o kernel.bin kernel.o kernelasm.o 
qemu-system-x86_64 -kernel kernel.bin
grub-mkrescue -o mudoskernal.iso mud/

read a


