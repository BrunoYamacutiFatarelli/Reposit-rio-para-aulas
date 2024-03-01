#include <stdio.h>

main()
{
	int valorA, valorB, valorC;
	
	printf("\nDigite o valor de A:\n");
	scanf("%d", &valorA);
	printf("\nDigite o valor de B:\n");
	scanf("%d", &valorB);
	
	valorC=valorA;
	valorA=valorB;
	valorB=valorC;
	
	printf("Os vlores de A e B foram trocados! A=%d e B=%d", valorA, valorB);
}
