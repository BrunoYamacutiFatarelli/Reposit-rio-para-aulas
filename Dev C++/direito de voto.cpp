#include <stdio.h>

main()
{
	int idade;
	
	printf("\nDigite sua idade:\n");
	scanf("%d", &idade);
	
	if (idade<16)
		printf("\nPara voce, votar e proibido!");
	else
		if(idade>=18&&idade<65)
			printf("\nPara voce, votar e obrigatorio!");
		else
			printf("\nPara voce, votar e facultativo!");
}
