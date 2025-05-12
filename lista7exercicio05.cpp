#include <stdio.h>
#define LEN 10

int main()
{
	/* 5. Receber 10 números e armazená-los em um vetor. 
	Ao final, exibir a quantidade de números negativos
	informados.*/
	 
	 int n[LEN], i;
	 for (i=0; i<LEN; i++)
	 {
	 	printf("insira o %i numero: ", i+1);
	 	scanf("%i", &n[i]);
	 }
	 
	 for (i=0; i<LEN; i++)
	 {
	 	if (n[i] < 0)
	 	{
	 		printf("%i ", n[i]);
		}
	 }
	 return 0;
}
