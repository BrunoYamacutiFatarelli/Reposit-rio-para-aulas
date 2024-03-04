#include <stdio.h>

main()
{
	float comp, larg, a, p;
	
	printf("\nDigite o comprimento do terreno:");
	scanf("%f", &comp);
	printf("\nDigite a largura do terreno:");
	scanf("%f", &larg);
	
	a = comp*larg;
	p = 2*(comp+larg);
	
	printf("\n¡rea = %.2fm2 e Perimetro = %.2fm", a, p);
	
}
