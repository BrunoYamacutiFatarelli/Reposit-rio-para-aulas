#include <stdio.h>

main()
{
	int ano;
	
	printf("\nDigite um ano, e direi se será um ano bissexto ou não\n");
	scanf("%d", &ano);
	
	if ((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 == 0))
		printf("\nO ano %d e bissexto!", ano);
	else
		printf("\nO ano %d nao e bissexto", ano);
}
