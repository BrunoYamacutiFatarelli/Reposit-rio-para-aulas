#include <stdio.h>

main()
	
{
	int numdado, sucessor;
	
	printf("\nDigite um número de 0 a 60, e te darei seu sucessor\n");
	scanf("%d", &numdado);
	
	sucessor=(numdado+1)%61;
	
	printf("O sucessor do seu numero e %d", sucessor);
}
