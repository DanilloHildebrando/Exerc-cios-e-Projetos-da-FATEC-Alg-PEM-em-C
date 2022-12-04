/******************************************************************************
// Este algortimo salva os valores de um vetor em outro seguindo as condições de, se o número for par múltiplica por 2 se for ímpar por 3
*******************************************************************************/


#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10];
    int x=0, testePar;
    
    for(x=0; x<10; x++){
        printf("Digite um número inteiro: ");
        scanf("%i", &vetor1[x]);
    }
    
    for(x=0; x<10; x++){
        testePar = vetor1[x]%2;
          if (testePar == 0){
            vetor2[x] = vetor1[x] * 2;
        } else {
            vetor2[x] = vetor1[x] * 3;
        }
        printf("%d ", vetor2[x]);
    }
    
    return 0;
}
