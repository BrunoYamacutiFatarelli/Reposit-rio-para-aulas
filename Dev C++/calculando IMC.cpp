#include <stdio.h>

main()
{
	float peso, altura, imc;
	
	printf("\nDigite o valor do seu peso (em KG)\n");
	scanf("%f", &peso);
	
	printf("\nDigite o valor da sua altura (em metros)\n");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	printf("\nCom o peso de %.2fkg, e a altura de %.2f,\nO seu valor IMC e de %.2f", peso, altura, imc);
	
	if (imc<=18.5)
		printf("\nE sua classificacao IMC e 'Peso Abaixo'");
	else
		if (imc<=24.9)
			printf("\nE sua classificacao IMC e 'Peso Normal'");
		else
			if (imc<=29.9)
				printf("\nE sua classificacao IMC e 'Sobrepeso'");
			else
				if (imc<=34.9)
					printf("\nE sua classificacao IMC e 'Obesidade Grau I'");
				else
					if (imc<=39.9)
						printf("\nE sua classificacao IMC e 'Obesidade Grau II (Severa)'");
					else
						("\nE sua calssificacao IMC e 'Obesidade Grau III (Mórbida!)'");
						
}
