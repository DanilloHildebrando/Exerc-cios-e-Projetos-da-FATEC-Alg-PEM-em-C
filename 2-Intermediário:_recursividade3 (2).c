/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int alg3(int n)

{

   if (n < 0) return 2;

   else
   {
       int aux = alg3(n - 2);
       printf("%d -- %d \n", (n-2), aux);
       return 2 * aux + 1;

}
}




int main()
{
    printf("7 -- %d", alg3(7));
    
}
