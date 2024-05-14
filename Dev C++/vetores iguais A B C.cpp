#include <stdio.h>

main()
{
	

int a[5], b[5], c[5], i, j, k;

printf("\nDigite os valores do vetor A:\n");
for(i=0;i<5;i++)
	scanf("%d", &a[i]);

printf ("\nDigite os valores do vetor A:\n");
for(i=0;i<5;i++)
	scanf("%d", &b[i]);
	
k=0;
for (i=0;i<5;i++)
	for(j=0;j<5;j++)
		if(a[i]==b[j])
			c[k++] = a[i];
	
	if(k==0)
		printf("\nIntersecao vazia");
		else
		{
			printf("\nVector C:\n");
			for(i=0;i<k;i++)
				printf("%d\n", c[i]);
		}
}
