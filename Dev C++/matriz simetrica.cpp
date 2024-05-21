#include <stdio.h>
#include <stdlib.h>

main()
{
	int A[5][5], i, j, simetria;
	
	printf("\nDigite os valores da Matriz A:\n");
	for(i=0; i<5; i++)
		for (j=0; j<5; j++)
			scanf("%d", &A[i][j]);
					
	printf("\nMatriz A:\n");
	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			printf("%3d", A[i][j]);
		printf("\n");
	}
	simetria = 1;
	for (i=0; i<4; i++)
		for (j=i+1; j<5; j++)
			if (A[i][j] !=A[j][i])
			{
				simetria=0;
				break;
			}
	if (simetria)
		printf("\nMatriz Simetrica!");
	else
		printf("\nMatriz Assimetrica!");
}
