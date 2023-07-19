/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int raiz(int numero)
{
    int x, teste;
    for(x=0;x<numero;x++)
    {
        teste = x * x;
        if(teste == numero)
        {
            return x;
        } 
    }
    return -1;
}

int main () {
int resultado, num;

printf("Digite o número que quer saber a raiz: ");
scanf("%i", &num);

resultado = raiz(num);
if(resultado == -1) printf("Número sem raiz inteira");
else printf("%i", resultado);

}
