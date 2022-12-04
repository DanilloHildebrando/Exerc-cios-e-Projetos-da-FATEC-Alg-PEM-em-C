/******************************************************************************

// Este algoritmo calcula a média de números informados até que se digite zero

*******************************************************************************/

#include <stdio.h>



int main()
{
    int n, cont=0;
    float media;
    printf("Digite apenas números inteiros postivos e aperte zero para calcular a média: \n");
    while (n != 0)  {
       scanf("%i", &n);
          if(n != 0) {
            media += n;
            cont ++;
              }
            }
media = media / cont;
printf("A média é %.2f", media);
}
