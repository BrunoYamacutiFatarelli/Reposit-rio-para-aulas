#include <stdio.h>

main()
{
	int valorA, valorB, valorC, valorAux;
	
	printf("\nDigite o valor de A\n");
	scanf("%d", &valorA);
	printf("\nDigite o valor de B\n");
	scanf("%d", &valorB);
	printf("\nDigite o valor de C\n");
	scanf("%d", &valorC);
	
	if (valorA>valorB||valorA>valorC)
		if (valorB<valorC)
		{
			valorAux = valorA;
			valorA = valorB;
			valorB = valorAux;
		}
		else
		{
			valorAux = valorA;
			valorA = valorC;
			valorC = valorAux;
		}
		
	if (valorB < valorC)
	{
		valorAux = valorB;
		valorB = valorC;
		valorC = valorAux;
	}
	printf("\nO valor de A e %d, o valor de B e %d e o valor de C e %d", valorA, valorB, valorC);
}
