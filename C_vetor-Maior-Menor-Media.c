/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*c – faça um algoritmo que implemente um vetor de 20 posições, leia as 20 posições e 
identifique em um novo laço, qual o maior e menor numero informado e qual a media dos números informados..*/


#include <stdio.h>

int main()
{
    int vetor[20];
    int x=0, soma, maior=0, menor=99999, cont=0;
    float media;
    
    for(x=0; x<20; x++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[x]);
        soma += vetor[x];
    }
    
    for(x=0; x<20; x++){
        if (vetor[x] > maior){
            maior = vetor[x];
        } 
        if (vetor[x] < menor){
            menor = vetor[x];
        }
        
        cont++;
    }
    
    media = soma / cont;
    printf("O maior número digitado foi %d e o menor %d. A média deles é %.2f", maior, menor, media);
    return 0;
}
