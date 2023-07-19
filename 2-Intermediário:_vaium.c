/******************************************************************************

7. Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros 
de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros.

notar sacada do vaium

*******************************************************************************/
#include <stdio.h>

int main()
{
   int vet1[] = {8, 2, 4, 3, 4, 2, 5, 1}, n=8;
   int vet2[] = {3, 3, 7, 5, 2, 3, 3, 7};
   int soma[n + 1];
   int vaium =0, i;
   for(i=n-1; i>=0; i--)
   {
       soma[i+1] = vet1[i] + vet2[i] + vaium;
       if(vet1[i] + vet2[i] >= 10) {
           soma[i + 1] = soma[i + 1] - 10;
           vaium = 1;
       }
       else vaium = 0;
       

   }
    soma[0] = vaium;   
    for(i=0; i<=8; i++) printf("%d", soma[i]);

    return 0;
}
