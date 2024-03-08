#include <stdio.h>
#include <conio.h>

main()

{
	char sexo;
	
	printf("\nDigite o sexo (M ou F)\n");
	fflush(stdin); //limpar o buffer do teclado)
	sexo = getche();
	if(sexo=='F'||sexo=='f')
		printf("\nFeminino");
	else
		if (sexo=='M'||sexo=='m')
			printf("\nMasculino");
		else
			printf("\nResposta inválida!");
}
