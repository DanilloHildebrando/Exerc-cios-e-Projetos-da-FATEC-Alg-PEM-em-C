/******************************************************************************

// Este algoritmo verifica entre números digitados qual o maior, menor e a média. O requisito para ele para é ser digitado um valor que não seja 0

*******************************************************************************/
#include <stdio.h>

int main()

{
    int x, n=1, maior, menor;
    float media, soma;
    x = 0;
    soma = 0;
    while (n != 0){
            printf("Informe o %i° da operação: ", x+1);
            scanf("%i", &n);
            soma = soma + n;
                if(x == 0){
                    maior = n;
                    menor = n;
                    } else {
                        if(n > maior){
                            maior = n;
                        }
                            if(n < menor && n != 0){
                                menor = n;
                        }
                    }
                 x++;
    }
    x--;
    media = soma / x;
    printf("A média é %.2f, o maior é %i e o menor é %i", media, maior, menor);

    return 0;

}
