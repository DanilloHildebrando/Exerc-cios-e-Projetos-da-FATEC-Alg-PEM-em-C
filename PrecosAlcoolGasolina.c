/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Este algoritmo verifica a partir dos preços do álcool e da gasolina, qual é mais vantajoso para compra

int main()

{

float gasolina, alcool, setentapc;

printf("Digite o valor da gasolina: \n");

scanf("%f", &gasolina);

printf("Digite o valor do álcool: \n");

scanf("%f", &alcool);

setentapc = 0.7*gasolina;

if(alcool <= setentapc ){

printf("O álcool é mais vantajoso");

} else {

printf("A gasolina é mais vantajosa");

}

}
