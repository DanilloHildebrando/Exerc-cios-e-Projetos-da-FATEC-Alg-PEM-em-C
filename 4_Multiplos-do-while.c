/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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

