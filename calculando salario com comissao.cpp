#include <stdio.h>

main()
{
	float salario, vendas, comissao, valordacomissao,totalsemcomissao, total;
	
	printf("\nDigite o salario do funcionario:\n");
	scanf("%f", &salario);
	printf("\nDigite o valor final das vendas realizadas pelo mesmo funcionario:\n");
	scanf("%f", &vendas);
	printf("\nDigite a porcentagem aplicada de comissao sobre ditas vendas (exp: 4, 5):\n");
	scanf("%f", &comissao);
	
	valordacomissao=vendas*(comissao*0.01);
	totalsemcomissao=salario+vendas;
	total=salario+vendas+valordacomissao;
	
	printf("O total a ser recebido seria de R$%.2f sem a comissao, porem com ela, o valor final sera de R$%.2f!", totalsemcomissao, total);
}
