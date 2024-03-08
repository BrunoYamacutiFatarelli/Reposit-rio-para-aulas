#include <stdio.h>

main()
{
	int valorA, valorB, valorC;
	
	printf("\nDigite o valor A:\n");
	scanf("%d", &valorA);
	printf("\nDigite o valor B\n");
	scanf("%d", &valorB);
	printf("\nDigite o valor C\n");
	scanf("%d", &valorC);
	
	if(valorA>valorB&&valorC)
		printf("\nO maior valor e A!");
	else
		if(valorB>valorA&&valorC)
		printf("\nO maior valor e B!");
		else
			if(valorC>valorA&&valorB)
			printf("\nO maior valor e C");
}
