#include<stdio.h>

#define VC



#ifdef GCC

//  implementacao GCC
#endif

#ifdef VC
int shift(unsigned int value, unsigned int qt)
{
	__asm
	{
		mov eax, value;
		mov ecx , qt
		rol eax, cl;
		
	}
}

#endif





int main()
{
	printf(" %x\n", shift(0xffffffff,1));

	return 0;
}
