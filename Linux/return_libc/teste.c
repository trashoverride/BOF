/*
  antes de compilar: sudo echo "0" > /proc/sys/kernel/randomize_va_space
  compile : gcc vuln.c -o vuln -zexecstack -fno-stack-protector -g
  crash : ./vuln `perl -e 'print   "A"x76 . "\x61\x61\x61\x61"'`
  Autor : BitKiller 

*/ 

#include <stdio.h> 
#include <string.h>  

void func_bug(char * ptr) 

{ 
  char a [64];
	strcpy(a,ptr); 

} 


int  main(int argc, char * argv[]) 
{
	if(argc < 1)
	{
		printf("use:%s <string>\n", argv[1]);
		return 1;
	}
	printf("inicio\n");
	func_bug(argv[1]);
	printf("fim\n");

	return 1;

}
