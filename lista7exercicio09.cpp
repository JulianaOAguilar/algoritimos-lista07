#include <stdio.h>
#define LEN 10

int main()
{
	/* 9. Receber 10 n�meros e armazen�-los em um vetor.
	Copiar os n�meros em outro vetor na ordem inversa e 
	mostrar na tela todas as posi��es em que se tem o mesmo
	n�mero nos dois vetores. Exemplo:
	1     2     3     1     2     3     1     2     3     1
	1     3     2     1     3     2     1     3     2     1
	Posi��es: 0, 3, 6, 9 */
	
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
