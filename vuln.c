/*
  antes de compilar: sudo echo "0" > /proc/sys/kernel/randomize_va_space 
  compile : gcc vuln.c -o vuln -zexecstack -fno-stack-protector -g
  Autor : BitKiller

*/


#include <stdio.h>
#include <string.h>

unsigned char shellcode[] =

"\x31\xc0\xb0\x04\x31\xdb\x53\x68\x72\x6c\x64\x0a"
"\x68\x6f\x20\x77\x6f\x68\x68\x65\x6c\x6c\x89\xe1"
"\x31\xd2\xb3\x01\xb2\x0c\xcd\x80\xb0\x01\xcd\x80";

unsigned char Str[1000];


void func_bug(char * ptr)
{

char a [64];

	strcpy(a,ptr);
}


void main(int argc, char * argv[])
{

	if(argc < 1)
	{
		printf("use:%s <string>\n", argv[1]);
		return;
	}

	printf("inicio\n");
	func_bug(argv[1]);
	printf("fim\n");
}
