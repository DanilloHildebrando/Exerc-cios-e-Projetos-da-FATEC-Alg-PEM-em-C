/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float soma_equacoes(float x)
{
    if (x == 1) return 1;
        
        else return soma_equacoes(x-1) + (1/x);

    return 0;
}

float main()
{
    
    printf("%i = %f", 3, soma_equacoes(3));
}