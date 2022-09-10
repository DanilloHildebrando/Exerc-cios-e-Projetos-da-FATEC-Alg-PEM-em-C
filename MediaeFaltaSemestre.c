/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, med, medR;
    int fal;
    printf("Informe as duas notas do aluno e a quantidade de faltas no semestre \n");
    scanf("%f %f %i", &n1, &n2, &fal);
    
    
    if(fal > (20 * 0.3)){
        printf("O aluno reprovou por faltas");
    } else {
        med = (n1 + n2) / 2;
        if(med >= (6)){
            printf("O aluno foi aprovado");
        } else {
            printf("Informe nota da prova de recuperação\n");
            scanf("%f", &n3);
            medR = (n1 + n2 + n3) / 3;
            if(medR >= (6)){
            printf("Aprovado no semestre");   
        }else{
            printf("Reprovado por nota");
        }
        
    }
    return 0;
}
}

