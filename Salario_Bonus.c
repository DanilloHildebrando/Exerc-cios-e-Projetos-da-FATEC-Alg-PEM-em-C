/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

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
