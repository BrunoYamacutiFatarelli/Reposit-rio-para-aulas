#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[20], b[20], c[20], i, j, k;
	
	printf("\nGerando os 20 numeros do vetor A:\n");
	srand(time(NULL));
	for (i=0; i<20; i++)
	{
		a[i] = rand()%50+1;
		printf("%d\n", a[i]);
	}
	j=0;
	k=0;
	for (i=0; i<20; i++)
		if(a[i] % 2 == 0)
			b[j++]=a[i];
		else
			
			c[k++]=a[i];
	printf("\nVetor dos pares:\n");
	for (i=0; i<j; i++)
		printf("%3d", b[i]);
	printf("\nVetor dos impares:\n");
	for(i=0; i<k; i++)
		printf("%3d", c[i]);
}
