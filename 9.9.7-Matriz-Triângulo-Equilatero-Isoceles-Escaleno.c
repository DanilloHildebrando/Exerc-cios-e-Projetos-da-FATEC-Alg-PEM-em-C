/******************************************************************************

// Este algorítmo compara os valores das colunas de uma matriz para identificar se eles corresdem a valores de triângulos, isóceles, escalenos ou equiláteros.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float matriz[10][3], perc1, perc2, perc3;
    int x, escaleno, equilatero, isoceles;
    
    for(x=0;x<10;x++){
        printf("Digite o tamanho da primeira aresta do triângulo %i : ",(x +1));
        scanf("%f", &matriz[x][0]);
        printf("Digite o tamanho da segunda aresta do triângulo %i  : ",(x +1));
        scanf("%f", &matriz[x][1]);
        printf("Digite o tamanho da terceira aresta do triângulo %i : ",(x +1));
        scanf("%f", &matriz[x][2]);
    }
    for(x=0;x<10;x++){
        if(matriz[x][0] != matriz[x][1] && matriz[x][0] != matriz[x][2] && matriz[x][1] != matriz[x][2]) escaleno++;
        if(matriz[x][0] == matriz[x][1] && matriz[x][0] != matriz[x][2] || matriz[x][0] == matriz[x][2] && matriz[x][0] != matriz[x][1]) isoceles++;
        if(matriz[x][0] == matriz[x][1] && matriz[x][0] == matriz[x][2]) equilatero++;
    }
    perc1 = (escaleno * 10); // cada triangulo equivale a 10%
    perc2 = (isoceles * 10);
    perc3 = (equilatero * 10);
    printf("O percentual de triângulos escalenos é %.1f %%, de isóceles é %.1f %% e equilateros %.1f %%", perc1, perc2, perc3);
    return 0;
}
