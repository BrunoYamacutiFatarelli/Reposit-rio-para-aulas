#include <stdio.h>

main()
{
	int segundos, minutos, horas,segundosrestantes;
	
	printf("\nDigite uma quantidade de segundos para ser calculada:\n");
	scanf("%d", &segundos);
	
	horas=segundos/3600;
	minutos=(segundos % 3600)/60;
	segundosrestantes=segundos % 60;
	
	printf("%d segundos=\nHoras: %d\nMinutos: %d\nSegundos: %d", segundos, horas, minutos, segundosrestantes);
}
