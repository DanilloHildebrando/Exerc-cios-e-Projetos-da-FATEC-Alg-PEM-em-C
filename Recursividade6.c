/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int alg6(int n, int k)

{

   if(n < k)  return 0;

   else {
       int aux = alg6 (n-k, k);
       printf("%d -- %d = %d\n", (n-k), k, aux);
       return aux + 1;
   }
}

int main()
{
    printf("%d -- %d = %d\n", 32, 5, alg6(32, 5));
    

    return 0;
}
