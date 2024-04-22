#include <stdio.h>
#include <math.h>

main()

{
	int inteiro, div, totaldiv=2;
	
	printf("\nDigite um numero inteiro: \n");
	scanf("%d", &inteiro);
	
	for (div = 1; div <= inteiro; div++)
		if (inteiro % div == 0)
		{
			totaldiv++;
			break;
		}
		
		if(totaldiv == 2)
		printf("\nPrimo");
		else
		printf("\nNao e primo");
}
