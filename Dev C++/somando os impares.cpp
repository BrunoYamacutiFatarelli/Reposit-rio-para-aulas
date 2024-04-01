#include <stdio.h>

main()
{
	int numero, soma=0, impar=1;
	
	printf("\nDigite um numero:\n");
	scanf("%d", &numero);
	
	while (impar <= numero)
	{
		soma += impar;
		impar += 2;
	}
	
	printf("\nA soma dos impares = %d", soma);
}
