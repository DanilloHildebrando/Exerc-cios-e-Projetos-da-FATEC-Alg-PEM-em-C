/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int alg5(int n, int k)

{

      if(n == 0)  return 0;

   else
   {
       int aux = alg5((n - 1), k);
       printf("%d , %d -- %d \n", (n - 1) , k , aux);
       return aux + k;

}
}




int main()
{   printf("%d , %d -- %d \n", 4 , 5 , alg5(4 , 5));
}
