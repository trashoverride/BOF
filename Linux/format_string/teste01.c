#include<stdio.h>

#define TAM_BUFF 100


void imprime_nome(char *a)
{

	
 	printf(a);
	printf(", que nome Lindo!!\n\n");
}





int main(int argc, char *argv[])
{

   char nome[TAM_BUFF + 1]={0};
   int tam;
	
   if(argc  < 2)
   {
	printf("use:%s<NOME>\n", argv[0]);
	return 0;
   }
	
	tam = strlen(argv[1]);
	memcpy(nome,argv[1],(tam > TAM_BUFF) ? TAM_BUFF:tam);
	imprime_nome(nome);





    return(0);
}
