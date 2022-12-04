/******************************************************************************

// Este algoritmo calcula o bonus de salário de um funcioário baseado no tempo de trabalho

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float tP, saL, sal20, sal10;
    
    printf("Digite o tempo de trabalho do funcionário, em anos, seguido do seu respectivo salário: \n");
    scanf("%f %f", &tP, &saL);
    
    if(tP >= 5){
        sal20 = saL + (saL * 0.2);
        printf("O salário acrescido do bônus de 20%% pelo tempo de serviço é: R$ %.2f ", sal20);
        
        } else {
            sal10 = saL + (saL * 0.1);
            printf("O salário acrescido do bônus de 10%% pelo tempo de serviço é: R$ %.2f", sal10);
    }

    return 0;
}
