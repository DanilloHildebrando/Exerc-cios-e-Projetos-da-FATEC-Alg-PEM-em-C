/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int somaQuadrado(int N)

{
    
    int soma = 0;
if(N < 0) N = -N;
if(N == 0) return 0;

else 
{
    return somaQuadrado(N-1) + N * N;

}


}


int main()
{   
    printf("%d -- %d \n", 1 , somaQuadrado(-5));
}