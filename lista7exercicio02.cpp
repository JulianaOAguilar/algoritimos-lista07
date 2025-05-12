#include <stdio.h>
#define LEN 10

int main()
{
	/*2. Receber 10 números e armazená-los em um vetor.
	Ao final, exibir os números na ordem inversa da que
	foram recebidos.*/
	 
	 int n[LEN], i;
	 for (i=0; i<LEN; i++)
	 {
	 	printf("insira o %i numero: ", i+1);
	 	scanf("%i", &n[i]);
	 }
	 
	 for (i=LEN-1; i>=0; i--)
	 {
	 	printf("%i ", n[i]);
	 }
	 return 0;
}
