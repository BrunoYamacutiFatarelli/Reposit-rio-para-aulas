#include <stdio.h>

main()

{
	int valorinteiro, centena, dezena, unidade;
	
	printf("\nDigite um numero (com no maximo tres digitos)\n");
	scanf("%d", &valorinteiro);
	
	centena=valorinteiro/100;
	dezena=(valorinteiro % 100)/10;
	unidade=valorinteiro % 10;
	
	printf("Centena: %d \nDezena: %d \nUnidade: %d", centena, dezena, unidade);	
}
