#include <stdio.h>
#include <stdlib.h>

main()
{
	int A[10], i, maior;
	
	for(i = 0; i < 10; i++)
	{
		puts("Digite os elementos do vetor:\n");
		scanf("%d", &A[i]);
	}
	puts("Vetor Lido:");
	for (i = 1; i < 10; i++)
		printf("%d\t", A[i]);
}
