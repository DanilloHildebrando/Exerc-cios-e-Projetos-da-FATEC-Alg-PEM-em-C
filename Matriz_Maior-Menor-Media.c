/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 1 – Construa um programa em C que utiliza uma matriz 10×3 que armazene as  temperaturas máxima e minima do dia, 
assim como a media de temperatura na ultima coluna.  Crie um menu de escolha que ofereça as seguintes informações:

temperatura minima de todos os dias.
temperatura máxima de todos os dias.
maior variação de temperatura de todos os dias.
Sair do programa.*/

#include <stdio.h>

int main()
{
    float matriz[10][3], varTem[10], menorTem, maiorTem, maiorVar=0;
    int x;
    
    for(x=0; x<10; x++){
        printf("\nDigite a temperatura mínima do dia %i : ", (x+1));
        scanf("%f", &matriz[x][0]);
        printf("\nDigite a temperatura máxima do dia %i : ", (x+1));
        scanf("%f", &matriz[x][1]);
        matriz[x][2] = (matriz[x][0] + matriz[x][1] / 2);
        varTem[x] = (matriz[x][1] - matriz[x][0]);
    }
    
    for(x=0; x<10; x++){
        if (x == 0){
            menorTem = matriz[x][0];
            maiorTem = matriz[x][1];
        
        if(maiorVar < varTem[x]){
            maiorVar = varTem[x];
        }
        } else {
            if(matriz[x][0] < menorTem)  menorTem = matriz[x][0];
            if(matriz[x][1] > maiorTem)  maiorTem = matriz[x][1];
        }
    }
printf("\nA menor temperatura de todos os dias foi %.2f, já a maior %.2f e a maior variação foi de %.2f", menorTem, maiorTem, maiorVar);
    return 0;
}
