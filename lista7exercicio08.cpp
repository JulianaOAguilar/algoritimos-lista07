#include <stdio.h>
#define LEN 10

int main()
{
	/*8. Declarar um vetor de 10 posições já inicializado
	com os números de 1 a 10 e copiá-los para outro vetor na
	ordem inversa.*/
	
	int v1[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[LEN], i; 
	 
	for (i=0; i<LEN; i++)
	{
	 	v2[i] = v1[9-i];
	}
	 
	 for (i=0; i<LEN; i++)
	 {
	 	printf("vetor 1: %i / vetor 2: %i\n", v1[i], v2[i]);
	 }
	return 0;
}
