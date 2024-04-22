#include <stdio.h>

main()

{
	int inteiro, div;
	
	printf("\nDigite um numero inteiro: \n");
	scanf("%d", &inteiro);
	
	for (div = 1; div <= inteiro; div++)
		if (inteiro % div == 0)
		printf("%d\t", div);
}
