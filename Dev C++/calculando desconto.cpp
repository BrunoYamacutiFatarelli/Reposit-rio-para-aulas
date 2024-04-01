#include <stdio.h>

main()
{
	float valortotal, desconto, vp;
	
	printf("\nDigite o valor total da compra R$\n");
	scanf("%f", &valortotal);
	
	if(valortotal>=500)
		desconto = valortotal*0.20;
	else
		if(valortotal>=200)
			desconto = valortotal*0.15;
		else
			desconto = valortotal*0.10;
	vp = valortotal - desconto;
	
	printf("\nO valor total da compra e de R$%.2f, com o desconto de R$%.2f, totalizando R$%.2f", valortotal, desconto, vp);
}
