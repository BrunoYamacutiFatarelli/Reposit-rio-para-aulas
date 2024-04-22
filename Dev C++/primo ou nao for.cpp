#include <stdio.h>

main()

{
	int inteiro, div, totaldiv=0;
	
	printf("\nDigite um numero inteiro: \n");
	scanf("%d", &inteiro);
	
	for (div = 1; div <= inteiro; div++)
		if (inteiro % div == 0)
		totaldiv++;
		
		if(totaldiv == 2)
		printf("\nPrimo");
		else
		printf("\nNao e primo");
}
