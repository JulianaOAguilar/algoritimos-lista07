#include <stdio.h>
#define LEN 10

int main()
{
	/* 1. Receber 10 n�meros e armazen�-los em um vetor.
	 Ao final, exibir os 10 n�meros na ordem que foram 
	 recebidos.*/
	 
	 int n[LEN], i;
	 for (i=0; i<LEN; i++)
	 {
	 	printf("insira o %i numero: ", i+1);
	 	scanf("%i", &n[i]);
	 }
	 
	 for (i=0; i<LEN; i++)
	 {
	 	printf("%i ", n[i]);
	 }
	 return 0;
}
