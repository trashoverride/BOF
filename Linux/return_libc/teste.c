#include<stdio.h>

char j[]="/bin/ls";

void func_bug(char *a)
{
	char buff[10];

	strcpy(buff,a);


}


int main(int argc, char * argv[])
{

		
	func_bug(argv[1]);





}
