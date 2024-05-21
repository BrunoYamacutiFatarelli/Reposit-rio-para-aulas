#include <stdio.h>

main()
{
	int A[5][5], i, j;
	
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			A[i][j] = 0;
			
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			A[i][j]=i*j;
				
	printf("\nTriangulo inferior Direito:\n");
	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			printf("%3d", A[i][j]);
		printf("\n");
	}
}
