/******************************************************************************

// Este algoritmo relaciona três números digitados e devolve qual foi o maior, o menor e o do meio, desde que sejam diferentes
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
