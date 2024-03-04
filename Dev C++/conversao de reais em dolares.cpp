#include <stdio.h>

main()
{
	float valoremreais, conversao, valoremdolares;
	
	printf("\nDigite o valor em R$ que voce quer converter:\n");
	scanf("%f", &valoremreais);
	
	printf("\nDigite o preco do US$ atual:\n");
	scanf("%f", &conversao);
	
	valoremdolares=valoremreais/conversao;
	
	printf("O valor dado de R$%.2f, convertido em dolares, sera de US$%.2f...a crise ta feia", valoremreais, valoremdolares);
}
