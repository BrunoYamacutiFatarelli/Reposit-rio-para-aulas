#include <stdio.h>

main()
{
	float alt, pi;
	char sexo;
	
	printf("\nDigite a altura da pessoa em metros");
	scanf("%f", &alt);
	printf("\nDigite o sexo da pessoa (F ou M)");
	fflush(stdin);
	scanf("%c,", &sexo);
	
	if (sexo=='M'||sexo=='m')
	{
		pi = 72.7*alt-58;
		printf("\nPeso ideal = %.2f", pi);
	}
	else
		if (sexo=='f'||sexo=='F')
		{
			pi = 62.1*alt-44.7;
			printf("\nPeso ideal = %.2f", pi);
		}
}
