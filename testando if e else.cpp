#include <stdio.h>

main()
{
	int num, resto;
	
	printf("\nDigite um número:\n");
	scanf("%d", &num);
	
	resto = num % 2;
	
	if (resto==0)
		printf("\nO numero %d e par!", num);
	else
		printf("\nO numero %d e impar!", num);
}
