#include <stdio.h>

main()
{
	float peso, quilo, desconto, total, TotalComDesconto;
	
	printf("\nDigite o preco do KG do sorvete:\n");
	scanf("%f", &quilo);
	printf("\nDigite a quantidade de sorvete (em KG) na cesta:");
	scanf("%f", &peso);
	
	total=quilo*peso;
	desconto=total*(0.1);
	TotalComDesconto=total-desconto;
	
	printf("O valor total sera de R$%.2f, porem com a promocao ativa, o preco sera de R$%.2f. Um desconto de %.2f!", total, TotalComDesconto, desconto);
	
}
