#include <stdio.h>

main()
{
    int numA, numB, sim;
     printf("Digite um numero inteiro A:");
     scanf("%d", &numA);
     printf("Digite outro numero inteiro B:");
     scanf("%d", &numB);
     
     if ( numB>numA )
         printf("Nao termina pois B é maior que A");
     else
     { 
      	for(sim=1; numB>0 && sim==1;)
        if (numA%10 == numB%10)
         {
      	    numA /= 10;
      	    numB /= 10;
         }
        else
            sim=0;
     }
     
     if (sim==0)
     printf("Nao termina igual");
     else
     printf("Termina igual");
      
}
