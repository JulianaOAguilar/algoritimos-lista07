#include <stdio.h>
#define LEN 50

int main()
{
	/* 6. Preencher automaticamente um vetor com todos os
	n�meros pares entre 1 e 100 e depois exibir os n�meros
	para o usu�rio.*/
	 
	int v[LEN];
	int len = 0;
	int i;
	for (i=2; i<=100; i+=2)
	{
			v[len] = i;
			len++;
	}
	
	for (i=0; i<LEN; i++)
	{
		printf("v[%i]: %i \n", i, v[i]);
	}
	
	return 0;
}
