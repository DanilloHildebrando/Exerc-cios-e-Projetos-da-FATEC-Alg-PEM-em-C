/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

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
