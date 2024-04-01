#include <stdio.h>

main()
{
	int num=1, soma=0;
	
	while (num<=1000)
	{
		soma+=num;
		num++;
	}
	printf("\nSoma=%d", soma);
}
