#include <stdio.h>
#include <math.h>

main()

{
	int inteiro, div, soma=0;
	
	printf("\nDigite um numero inteiro: \n");
	scanf("%d", &inteiro);
	
	for (div = 1; div <= inteiro/2; div++)
		if (inteiro % div == 0)
			soma =+ inteiro;
			
		if(soma == inteiro)
		printf("\nO numero %d e perfeito", inteiro);
		else
		printf("\nO numero %d nao e perfeito", inteiro);
}
