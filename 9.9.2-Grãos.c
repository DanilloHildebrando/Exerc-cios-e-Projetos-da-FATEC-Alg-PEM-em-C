/******************************************************************************

// Este algoritmo cálcula a quantidade de grãos que um monje deveria ganhar a partir de uma lenda chinesa em kilos

*******************************************************************************/
#include <stdio.h>

int main()
{
 float cont=0, Qtd, x=1, Qtd_Kg;
 while(cont <= 62){
    Qtd = x * 2;
    x = Qtd;
    cont ++; 
    }
    if (cont = 62){
            Qtd = Qtd + 1;
            Qtd_Kg = Qtd/100000;
            printf("O valor me graos é %.2f Kg", Qtd_Kg);
 }
}
    

