/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Este algoritmo realiza a conversão de distâncias em Km para milhas

int main()

{

float kM, dM;

printf("Escreva a distância em Km:\n");
scanf("%f", &kM);

dM = kM / 1.60934;

printf("A distância em milhas é:\n %.2f", dM);

return 0;

}
