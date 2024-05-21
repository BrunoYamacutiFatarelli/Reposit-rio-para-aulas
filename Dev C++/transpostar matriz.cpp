#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int A[4][6], T[6][4], i, j;
	
	srand(time(NULL));
	printf("\nMatriz A:\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<6; j++)
		{
			A[i][j] = rand()%50 + 1;
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<6; i++)
		for(j=0; j<4; j++)
			T[i][j] = A[j][i];
	printf("\nMatriz Transposta T:\n");
	for(i=0; i<6; i++)
	{
		for (j=0; j<4; j++)
			printf("%3d", T[i][j]);
		printf("\n");
	}
}
