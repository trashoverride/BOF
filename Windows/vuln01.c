//compile com : gcc vuln01.c -w -g -o vuln01

#include<stdio.h>

char msgA[]="permissao para usar regedit";
char msgB[]="permissao para usar notepad";

void func_bug(char * s)
{
char a [10];
	strcpy(a,s);
	if(!strcmp(a,"joao"))
		printf("%s", msgA);
	else
		printf("%s", msgB);

}

int main(int argc, char * argv[])
{


	if(argc < 2)
	{
		printf("use:%s:<nome_usuario>", argv[0]);
		return 1;	
	}
	
	func_bug(argv[1]);

}

