/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[20];
    int x=0, vetorPar, testePar, vetorImpar;
    
    for(x=0; x<20; x++) {
        printf("Digite um número inteiro e positivo: ");
        scanf("%i", &vetor[x]);
        testePar = vetor[x]%2;
           
            if(testePar == 0){
                vetorPar++;
            } else {
                    vetorImpar++;
                }
    }
    
    vetorPar = vetorPar * 5; // Como são 20 posições, cada uma equivale a 5%
    vetorImpar = vetorImpar * 5;
    
    printf("A porcentagem de números pares é: %i %% e de ímpares é: %i %% ", vetorPar, vetorImpar);
    
    return 0;
}