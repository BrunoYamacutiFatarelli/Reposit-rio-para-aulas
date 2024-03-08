#include <stdio.h>

main()

{
	char sexo;
	
	printf("\nDigite o sexo (M ou F)\n");
	fflush(stdin); //limpar o buffer do teclado)
	scanf("%c", &sexo);
	if(sexo=='F'||sexo=='f'||sexo=='feminino'||sexo=='Feminino')
		printf("\nFeminino");
	else
		if (sexo=='M'||sexo=='m'||sexo=='masculino'||sexo=='Masculino')
			printf("\nMasculino");
		else
			printf("\nResposta inválida!");
}
