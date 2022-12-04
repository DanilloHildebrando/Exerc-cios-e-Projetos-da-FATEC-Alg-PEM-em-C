/******************************************************************************

// Este algoritmo verifica se os números digitados são múltiplos de 2 ou 3 dentre 10 números inteiros aleatórios, conta e diz quantos são de cada
*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0, n, mulDois=0, mulTres=0, resto2, resto3;
    do {
        printf("Informe um número inteiro positivo: ");
        scanf("%i",&n);
        
        resto2 = n%2;
        resto3 = n%3;
        
        if (resto2 == 0){
            mulDois++;
        } 
            if (resto3 == 0){
                mulTres++;
                    }
        x++;
    } while(x<10);
    printf ("A quantidade de números múltiplos de 2 é %i e de 3 é %i ", mulDois, mulTres);
    
    return 0;
}

