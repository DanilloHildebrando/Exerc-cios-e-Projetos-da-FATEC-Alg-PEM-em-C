/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//3- Faça um laço que calcule a media de todos os números informados, a condição de termino do laço e quando for digitado ZERO


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