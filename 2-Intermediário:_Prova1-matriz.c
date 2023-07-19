/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 int somaCentro ( int L, int C, int mat [ L ] [ C ] )
 {
    int i, x, soma =0;
   for (i = 0; i < L; i++)
   {
       for (x =0; x < C; x++)
       {
            if(i != 0 && i != L-1 && x != 0 && x != C-1)
            {
           soma = soma + mat[i][x];
            }
       
       }
   }
   return soma;
 }


int main()
{
    int L, C;
    int mat[4][4]= {    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16} 
                };
    printf("%d", somaCentro( 4, 4, mat));

    return 0;
}
