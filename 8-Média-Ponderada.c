/******************************************************************************

// Este algoritmo cálcula a média ponderada de três notas
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    
    
    printf("Informe as notas 1, 2 e 3 :\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    
    media = (n1*2+n2*3+n3*5) / 10;
    printf("O resultado da media de n1=%.3f, n2=%.3f e n3=%.3f, é = %.3f", n1, n2, n3, media);

   // 10 representa a soma dos pesos 2, 3 e 5
}
