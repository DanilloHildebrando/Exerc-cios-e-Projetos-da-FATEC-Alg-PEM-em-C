/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Este algoritmo verifica se um número digitado pelo usuário é par ou ímpar

int main()

{

int n, resto;

printf("Digite um número inteiro: ");

scanf("%i", &n);

resto = n % 2;

if(resto == 0){

printf("O número é par");

} else {

printf("O número é impar");

}

}
