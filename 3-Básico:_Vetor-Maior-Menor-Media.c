/******************************************************************************
// Este algoritmo identifica dentro de 20 números digitados em um vetor qual o maior, o menor e a média de todos
*******************************************************************************/


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
