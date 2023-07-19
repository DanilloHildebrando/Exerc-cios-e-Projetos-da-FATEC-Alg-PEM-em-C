/******************************************************************************

7. Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros 
de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros.

notar sacada do vaium

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    printf("Qual é o tamanho do triângulo? ");
    scanf("%d", &N);
    int mat [N][N];
    int i, j;
    
    
    
    for(i=0; i<N; i++){
        for(j=0; j<=i; j++){
            if(j==0 || i == j) mat[i][j] = 1;
            else mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
            printf("%4d", mat[i][j]);
        }
    printf("\n");    
    }
   return 0;
}
