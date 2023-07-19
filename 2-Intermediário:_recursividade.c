/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void contagem(int inicio, int fim)
{
    if(inicio <= fim){
        printf("%d  - ", inicio);
        contagem(inicio + 1, fim);
    }
    else printf("Stop the count!");
}

int main()
{
    contagem(1, 30);
    return 0;
}
