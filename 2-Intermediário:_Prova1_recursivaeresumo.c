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
    int aux = somaQuadrado(N-1);
    return aux + N * N;

}


}


int main()
{   
    printf("%d -- %d \n", 1 , somaQuadrado(-5));
}





https://dontpad.com/01042023

1)	int alg(int a, int b)
	{	if(b == 1) return a;
		else return alg(a+1, b-1) + a * b;
	}

Que valor a seguinte chamada devolve?
alg ( 2 , 6 ) = __77___

a	b	alg(a, b)
2	6	alg(3, 5) + 2 * 6 = 65 + 12 = 77
3	5	alg(4, 4) + 3 * 5 = 50 + 15 = 65
4	4	alg(5, 3) + 4 * 4 = 34 + 16 = 50
5	3	alg(6, 2) + 5 * 3 = 19 + 15 = 34
6	2	alg(7, 1) + 6 * 2 = 7 + 12 =19
7	1	7 (BASE)

2) 
#include <stdio.h>
double distanciaQuadratica (double A[ ], double B[ ], int N)
{	double soma = 0;
	int i;
	for(i=0; i<N; i++)
	{	soma = soma + (A[i] - B[i])*(A[i] - B[i]); 
	}
	return soma;
}
int main()
{   double A[] = {0,3,-2,7,9,11,15,0,0,0,0};
    double B[] = {0,4,0,7,9,11,15,0,1,0,1};
    printf("%f", distanciaQuadratica(A,B,11));
    return 0;
}


3)

#include <stdio.h>
int somaCentro (int L, int C, int mat[L][C])
{   int x, y, soma=0;
    for(x=0; x<L; x++)
    {   for(y=0; y<C; y++)
        {   if(x!=0 && x!=L-1 && y!=0 && y!=C-1)
                soma = soma + mat[x][y];
        }
    }
    return soma;
}
int main()
{   int matriz[4][4] =  {   {1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}
                        };
    printf("%d", somaCentro(4, 4, matriz));
    return 0;
}




De outro modo:



#include <stdio.h>
int somaCentro (int L, int C, int mat[L][C])
{   int x, y, soma=0;
    for(x=1; x<L-1; x++)
    {   for(y=1; y<C-1; y++)
        {   soma = soma + mat[x][y];
        }
    }
    return soma;
}
int main()
{   int matriz[4][4] =  {   {1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}
                        };
    printf("%d", somaCentro(4, 4, matriz));
    return 0;
}


4)

#include <stdio.h>
int somaQuadrados (int n)
{   if(n<0) n=-n;
    if(n==0) return 0;
    else return somaQuadrados(n-1) + n*n;
}
int main()
{   printf("%d", somaQuadrados(10));
    return 0;
}

Outro modo:

#include <stdio.h>
int somaQuadrados (int n)
{   if(n==0) return 0;
    else if(n<0) return somaQuadrados(n+1) + n*n;
    else return somaQuadrados(n-1) + n*n;
}
int main()
{   printf("%d", somaQuadrados(-5));
    return 0;
}

n	somaQuadrados(n)
-5	=somaQuadrados(-5+1) + (-5)*(-5) = somaQuadrados(-4) + 25 = 55
-4	=somaQuadrados(-4+1) + (-4)*(-4) = somaQuadrados(-3) + 16 = 30
-3	=somaQuadrados(-3+1) + (-3)*(-3) = somaQuadrados(-2) + 9 = 14
-2	=somaQuadrados(-2+1) + (-2)*(-2) = somaQuadrados(-1) + 4 = 5
-1	=somaQuadrados(-1+1) + (-1)*(-1) = somaQuadrados(0) + 1 = 1
0	=0

Outro modo:

#include <stdio.h>
int somaQuadrados (int i, int n)
{   printf("i = %d, n = %d\n", i, n);
    if(i>n) return 0;
    else return i*i + somaQuadrados(i+1, n);
}
int main()
{   printf("%d", somaQuadrados(0, 5));
    return 0;
}





Simulando um algoritmo:

int somaQuadrados (int n)
{   
    if(n==0) return 0;
    else return pow(somaQuadrados(n-1) + n, 2);
}

n=0 -> 0
n=1 ->  (0+1)^2 = 1
n=2 ->  (1 + 2)^2 = 9
n=3 ->  (9 + 3)^2 = 144
n=4 ->  (144 + 4)^2 = ....






