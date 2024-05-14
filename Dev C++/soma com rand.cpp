#include <stdio.h>
#include <stdlib.h>
//randomização
#include <time.h>
//metodos de tempo (horas, minutos, segundos...)

main()
{
	int A[10], B[10], C[10], i;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++)
	{
		A[i] = rand() % 100;
		B[i] = rand() % 100;
	}
	puts("Resultado:");
	for (i = 1; i < 10; i++)
	{
		C[i] = A[i] + B[i];
		printf("%d + %d = %d\n", A[i], B[i], C[i]);
	}
	
}
