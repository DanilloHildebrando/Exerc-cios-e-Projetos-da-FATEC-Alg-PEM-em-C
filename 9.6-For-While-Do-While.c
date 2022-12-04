/******************************************************************************

// Este exercício explora as estruturas for, while e do while em três algoritmos diferentes
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
int main()
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

//b- reescreva com o laço faça enquanto (do while)
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
