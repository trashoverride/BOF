/*
	Bikiller - 03/02/2017
*/



#include<stdio.h>


#define right 1
#define left  0

#define TRUE 1
#define FALSE  0



unsigned char ExistCarry(unsigned short value, unsigned short mask)
{

	if (value & mask)
		return TRUE;
	else
		return FALSE;

}


int ShiftBit(unsigned short _value, unsigned short _qtShift, unsigned char direct)
{
	int i;
	int AddCarry;

	for (i = 0; i < _qtShift; i++)
	{
		if (direct)
		{
			
			AddCarry = ExistCarry(_value, 0x0001);
			_value = _value >> 1;
			if (AddCarry)
				_value = _value + 0x8000;
		}
		else
		{
			
			AddCarry = ExistCarry(_value, 0x8000);
			_value = _value << 1;
			if (AddCarry)
				_value = _value + 0x0001;
		}
		
	}

	return _value;

}



int main(int argc, char * argv)
{

	unsigned short  qt;
	unsigned short  value ;
	

//descomente para usar manualmente

/*	if (argc < 3)
	{
		printf("%s <qt shift> <value>");
		return 0;
	}
	
	
	unsigned int qt = atoi(argv[1]);
	unsigned int value = atoi(argv[2]);
*/


//  teste case 01
	qt = 1;
	value = 0x7FFF;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));
/*

Lembre-se é para "shiftar" em 16 bits logo o "1" quando vc shift p direita para vai para o bit mais significativo
portanto 7FFF -> 101111111111111

*/

	

//  teste case 02
	qt = 1;
	value = 0x0001;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));


//  teste case 02
	qt = 1;
	value = 0x0000;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));


//  teste case 03
	qt = 1;
	value = 0xFFFF;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));


	//  teste case 01
	qt = 3;
	value = 0x7FFF;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));


	//  teste case 02
	qt = 4;
	value = 0x0003;
	printf("%x\n", ShiftBit(value, qt, right));
	printf("%x\n", ShiftBit(value, qt, left));



	return 0;


}