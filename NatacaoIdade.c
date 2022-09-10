/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int iD;
    printf("Informe a idade do nadador \n");
    scanf("%i", &iD);
    
    
    if(iD >= 5 && iD <= 7){
        printf("Categoria infantil A");
    } else {
        if(iD > 7 && iD <= 11){
            printf("Categoria infantil B");
        } else {
        if(iD > 11 && iD <= 13){
            printf("Categoria juvenil A");
        } else {
            if(iD > 13 && iD <= 17){
            printf("Categoria juvenil B");
        } else {
            if(iD >= 18){
            printf("Categoria adulta");
        } else {
            printf("Idade não permitida para iniciar");
        }
    }
    return 0;
}
}
}
}


