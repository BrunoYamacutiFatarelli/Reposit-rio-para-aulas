#include <stdio.h>

main()
{
	int numero, contador=1, resultado;
	
	printf("\nDigite um numero para ter sua tabuada amostra:\n");
	scanf("%d", &numero);
	
	while (contador <= 10)
	{
		resultado = numero*contador;
		printf("\n%d x %d = %d\n", numero, contador, resultado);
		contador++;
	}
}
