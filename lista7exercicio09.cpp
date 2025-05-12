#include <stdio.h>
#define LEN 10

int main()
{
	/* 9. Receber 10 números e armazená-los em um vetor.
	Copiar os números em outro vetor na ordem inversa e 
	mostrar na tela todas as posições em que se tem o mesmo
	número nos dois vetores. Exemplo:
	1     2     3     1     2     3     1     2     3     1
	1     3     2     1     3     2     1     3     2     1
	Posições: 0, 3, 6, 9 */
	
	int v1[LEN], v2[LEN], i;
	
	for (i=0; i<LEN; i++)
	{
	 	printf("insira o %i numero: ", i+1);
	 	scanf("%i", &v1[i]);
	} 
	 
	for (i=0; i<LEN; i++)
	{
	 	v2[i] = v1[9-i];
	}
	 
	 for (i=0; i<LEN; i++)
	 {
	 	if (v1[i] == v2[i])
	 	{
	 		printf("%i ", i);
		}
	 }
	return 0;
}
