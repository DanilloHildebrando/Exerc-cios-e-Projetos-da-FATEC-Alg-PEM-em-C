/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*b-Crie dois vetores do tipo inteiro com a capacidade de 10 posições, leia números que serão armazenados sequencialmente 
no primeiro vetor, faça um novo laço que armazene no segundo vetor 
o valor do primeiro multiplicado por 2 quando o índice for par, e multiplique por 3 quando o índice for impar.*/


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
