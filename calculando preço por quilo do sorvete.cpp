#include <stdio.h>

main()
{
	float peso, quilo, total;
	
	printf("\nDigite o preco do KG do sorvete\n");
	scanf("%f", &quilo);
	printf("\nDigite o peso (em KG) da cesta de sorvete\n");
	scanf("%f", &peso);
	total=peso*quilo;
	printf("O valor total do sorvete sera %.2f", total);
}
