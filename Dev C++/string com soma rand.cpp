#include <stdio.h>
#include <stdlib.h>
//randomização
#include <time.h>
//metodos de tempo (horas, minutos, segundos...)

main()
{
	int A[10], i, soma;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++)
	{
		A[i] = rand() % 100;
	}
	soma = 0;
	puts("Vetor Lido:");
	for (i = 1; i < 10; i++)
	{
		printf("%d\t", A[i]);
		soma += A[i];
	}
	printf("\nSoma dos valores do vetor: %d", soma);
}
