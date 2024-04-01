#include <stdio.h>

main()
{
	int valorA, valorB, valorC;
	
	printf("\nDigite um valor para A");
	scanf("%d", &valorA);
	
	printf("\nDigite um valor para B");
	scanf("%d", &valorB);
	
	printf("\nDigite um valor para C");
	scanf("%d", &valorC);
	
	if (valorA<(valorB+valorC) && valorB<(valorA+valorC) && valorC<(valorA+valorB))
	{
		printf("\nEh um triangulo...");
		if (valorA==valorB && valorA==valorC)
			printf("equilatero!\n");
		else
			if (valorA==valorB||valorB==valorC||valorC==valorA)
				printf("isoceles!");
	}
	else
		printf("\nNao e triangulo!");
}
