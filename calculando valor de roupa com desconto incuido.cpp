#include <stdio.h>

main()
{
	float preco, desconto, valordescontado, total;
	
	printf("\nDigite o valor da peca de roupa:");
	scanf("%f", &preco);
	printf("\nDigite o desconto oferecido pela loja (exp: 10, 20):");
	scanf("%f", &desconto);
	
	valordescontado=preco*(desconto*0.01);
	total=preco-valordescontado;
	
	printf("O valor da peca de roupa era de R$%.2f, mas com o desconto de %.2f, o valor passou a ser de R$%.2f!", preco, desconto, total);
}
