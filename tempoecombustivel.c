/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Este programa realiza o cálculo do tempo aproximado de uma viagem de carro em horas e o consumo médio de combustível

int main()

{

float kM, vM, cB, tV, qL;

printf("Escreva a distância da viagem Km:\n");

scanf("%f", &kM);

printf("Escreva a valocidade média em Km/h:\n");

scanf("%f", &vM);

printf("Escreva o consumo de combustível do carro em L/Km:\n");

scanf("%f", &cB);

tV = kM / vM;

printf("O tempo aproximado de viagem em horas é:\n %.2f", tV);

qL = kM / cB;

printf("O consumo aproximado de conbústivel será: \n %.2f", qL);

return 0;

}
