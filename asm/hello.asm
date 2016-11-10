;nasm -f elf -l hello.lst hello.asm
;gcc -o hello hello.o
SECTION .data

msg: db "HELLO WORLD",10
len: equ $-msg

SECTION .text
	global main
main:
	mov edx,len
	mov ecx,msg
	mov ebx,1
	mov eax,4
	int 0x80

	mov ebx,0
	mov eax,1
	int 0x80
