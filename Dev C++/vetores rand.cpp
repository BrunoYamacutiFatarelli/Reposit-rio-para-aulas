#include <stdio.h>
#include <stdlib.h>
//randomização
#include <time.h>
//metodos de tempo (horas, minutos, segundos...)

main()
{
	int A[10], i, maior;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++)
	{
		A[i] = rand() % 7;
	}
	puts("Vetor Lido:");
	for (i = 1; i < 10; i++)
		printf("%d\t", A[i]);
}
