#include <stdio.h>

main()
{
	int contador=1, aprovados=0, reprovados=0;
	float nota1, nota2, media, soma=0, mediageral;
	
	while (contador <= 5)
	{
		printf("\nDigite a primeira nota:\n");
		scanf("%f", &nota1);
		printf("\nDigite a segunda nota:\n");
		scanf("%f", &nota2);
		
		media = (nota1+nota2)/2;
		if (media >= 6)
		{
			printf("\nAprovado com media = %.2f\n", media);
			aprovados++;
		}
		else
		{
			printf("\nReprovado com media = %.2f\n", media);
			reprovados++;
		}
		soma += media;
		contador++;
	}
	printf("\nTotal de aprovados: %d\n", aprovados);
	printf("\nTotal de reprovados: %d\n", reprovados);
	mediageral = soma/5;
	printf("\nMedia geral da sala: %.2f\n", mediageral);
}
