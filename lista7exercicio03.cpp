#include <stdio.h>
#define LEN 10

int main()
{
	/* 3. Receber 10 n�meros e armazen�-los em um vetor. 
	Ao final, exibir o dobro de cada um dos n�meros.*/
	 
	 int n[LEN], i;
	 for (i=0; i<LEN; i++)
	 {
	 	printf("insira o %i numero: ", i+1);
	 	scanf("%i", &n[i]);
	 }
	 
	 for (i=0; i<LEN; i++)
	 {
	 	printf("%i ", n[i]*2);
	 }
	 return 0;
}
