/*
  antes de compilar: sudo echo "0" > /proc/sys/kernel/randomize_va_space 
  compile : gcc vuln2.c -o vuln2 -zexecstack -fno-stack-protector -g
  Autor : BitKiller

*/


#include <stdio.h>
#include <string.h>



void func_bug(char * ptr)
{

char a [200];

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
