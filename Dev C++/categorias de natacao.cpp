#include <stdio.h>

main()
{
	int idade;
	
	printf("\nDigite a idade do nadador:\n");
	scanf("%d", &idade);
	
	if (idade<=8)
		printf("\nO nadador pertence a Categoria Infantil A");
	else
		if (idade>8 && idade<13)
			printf("\nO nadador pertence a Categoria Infantil B");
		else
			if (idade>13 && idade<18)
				printf("\nO nadador pertence a Categoria Juvenil A");
			else
				if (idade>18 && idade<21)
					printf("\nO nadador pertence a Categoria Juvenil B");
				else
					printf("\nO nadador pertence a Categoria Senior");
}
