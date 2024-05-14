#include <stdio.h>

main()
{
	int a[10], valor, i, existe;
	
	printf("Digite os valores do vetor:\n");
	for (i = 0; i <= 10; i++)
		scanf("%d", &a[i]);
		
	printf("\nDigite o valor a procurar:\n");
	scanf("%d", &valor);
	
	existe = 0; //0 valor nao existe, 1 valor existe
	for (i = 0; i <= 10; i++)
		if(valor==a[i])
		{
			existe = 1;
			break;
		}
	if (existe)
		printf("\nO valor %d existe no vetor", valor);
	else
		printf("\nO valor %d NAO existe no vetor!", valor);
}
