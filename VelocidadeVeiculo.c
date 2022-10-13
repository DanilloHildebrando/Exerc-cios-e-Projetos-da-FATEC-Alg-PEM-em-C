/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int velA, velC, m1, m2, m3;
    
    printf("Digite a velocidade permitida da avenida: ");
    scanf("%i", &velA);
    
    printf("Digite a velocidade do veículo: ");
    scanf("%i", &velC);
    
    
    if (velC <= velA){
        printf("O veículo estava dentro da velocidade permitda");
    } else {
           m1 = velA + 10;
           if(velC <= m1){
                printf("O veículo estava acima da velocidade e será multado em 50,00R$");    
    } else {
                m2 = velA + 30; 
                if(velC <= m2){
                    printf("O veículo estava acima da velocidade e será multado em 100,00R$"); 
    } else {
                    m3 = velA + 31;
                    if(velC >= m3){
                        printf("O veículo estava acima da velocidade e será multado em 200,00R$"); 
    }

    return 0;
}
}
}
}
