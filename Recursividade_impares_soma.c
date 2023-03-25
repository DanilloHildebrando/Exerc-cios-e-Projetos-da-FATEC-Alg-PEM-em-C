/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int impares_positivos(int x)
{
    int aux;
    if (x == 0) return 0;
    else if (x == 1) return 1;
    else if(x%2==0){ 
            printf("Número é par");
            return x;    
            }
    else {
        aux = impares_positivos(x - 2);
        return aux + x;
        }

}

int main()
{
    printf("%d = %d ", 2, impares_positivos(4));
    return 0;
}
