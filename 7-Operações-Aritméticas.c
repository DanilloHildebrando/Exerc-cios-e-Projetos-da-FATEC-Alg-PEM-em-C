/******************************************************************************

// Este algoritmo realiza uma operação aritmética escolhida pelo usuário a partir de dois números

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, soM, suB, muT, diV;
    int oP;
    printf("Informe dois números e a operação desejada \n");
    scanf("%f %f %i", &n1, &n2, &oP);
    
    
    if(oP == (1)){
        soM = (n1 + n2);
        printf("O resultado da soma é: %.1f", soM);
        } else {
            if (oP == (2)){
                suB = (n1 - n2);  
                printf("O resultado da subtração é: %.1f", suB);    
                } else {
                    if (oP == (3)){
                        muT = (n1 * n2);
                        printf("O resultado da multiplicação é: %.1f", muT); 
                        } else {
                            if (oP == (4)) {
                                diV = (n1 / n2);
                                printf("O resultado da divisão é: %.1f", diV); 
                                    } else {
                                        printf("Operação inválida"); 
                                            }
                                         }
            
                                }
                             }
    return 0;
}


