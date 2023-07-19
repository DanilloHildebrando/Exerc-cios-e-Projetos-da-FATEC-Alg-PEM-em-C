/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdbool.h>


bool repetidos(int cpf[])
{
    int x;
    for(x=1; x<12; x++)
    {
    if(cpf[0] != cpf[x]) return false;
    }
        return true;
}

int calculaDigito(int cpf[], int mult[], int N)
{
int soma=0, i;
for(i=0; i<N; i++) soma = soma + cpf[i]*mult[i];
int resto = ((soma*10) % 11) % 10;
return resto;
}

int main()
{   int cpf[11];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	printf("Entre com os 11 digitos do CPF:");
	    for(i=0;i<11;i++) scanf("%d", &cpf[i]);
	    
	        if(calculaDigito(cpf, m1, 9) == cpf[9] && (calculaDigito(cpf, m2, 10) == cpf[10]) && repetidos(cpf) == false) printf("\nCPF válido.");
	            else printf("\nCPF inválido");
  	
	return 0;
}
