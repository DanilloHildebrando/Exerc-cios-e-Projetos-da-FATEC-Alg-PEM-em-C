/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

//1- Dado o algoritmo abaixo escrito em C :
int main()
{

int i, a, b, r;
for(i=0; i<20; i++)
{
   scanf("%i",&a);
   scanf("%i",&b);
   r = a + b;
   printf("%i\n", r);
}
//a- reescreva com o laço enquanto faça (while)
/*int main()
{
int i=0, a, b, r;

while(i<20)
{
   scanf("%i",&a);
   scanf("%i",&b);
   r = a + b;
   printf("%i\n", r);
   
   i++;
}
}
*/
/*b- reescreva com o laço faça enquanto (do while)
int main()
{
int i=0, a, b, r;

do
{
   scanf("%i",&a);
   scanf("%i",&b);
   r = a + b;
   printf("%i\n", r);
   i++;
   
}while(i<20);
}
*/