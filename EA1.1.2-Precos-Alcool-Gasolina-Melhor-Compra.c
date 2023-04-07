/******************************************************************************

// Este algoritmo verifica a partir dos preços do álcool e da gasolina, qual é mais vantajoso para compra
                           

*******************************************************************************/

#include <stdio.h>


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

 }else {

    printf("A gasolina é mais vantajosa");

}

}
