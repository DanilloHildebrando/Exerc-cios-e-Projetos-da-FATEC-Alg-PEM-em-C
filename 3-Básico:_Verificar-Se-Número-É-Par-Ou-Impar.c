/******************************************************************************

// Este algoritmo verifica se um número digitado pelo usuário é par ou ímpar

*******************************************************************************/

#include <stdio.h>

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
