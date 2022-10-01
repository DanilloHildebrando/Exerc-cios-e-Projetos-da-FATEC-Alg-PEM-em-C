/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{

int n1, n2, n3;

printf("Digite três números inteiros: \n");

scanf("%i" "%i" "%i", &n1, &n2, &n3);

    if (n1 != n2 && n1 != n3 && n2 != n3){ // caso 1
        if (n1 > n2 && n1 > n3){
            if (n2 < n3){
                printf("O maior número é: %i, o do meio é %i e o menor é %i", n1, n3, n2);
    } else {
        if (n3 < n2){
            printf("O maior número é: %i, o do meio é %i e o menor é %i", n1, n2, n3);

            }

        }
    } else {
    if (n2 > n1 && n2 > n3){ // caso 2
        if (n1 < n3){   
            printf("O maior número é: %i, o do meio é %i e o menor é %i", n2, n3, n1);
            
    } else {
    if (n3 < n1){
            printf("O maior número é: %i, o do meio é %i e o menor é %i", n2, n1, n3);

                }

            }
    } else {
    if (n3 > n1 && n3 > n2){ // caso 3
        if (n1 < n2) {
            printf("O maior número é: %i, o do meio é %i e o menor é %i", n3, n2, n1);
        
    } else {
    if (n2 < n1){
        printf("O maior número é: %i, o do meio é %i e o menor é %i", n3, n1, n2);

                }

            }

        }   

    }

}

} else {

    if (n1 == n2 || n1 == n3 || n2 == n3){
        printf ("Digite números diferentes");

}

}

return 0;

}
