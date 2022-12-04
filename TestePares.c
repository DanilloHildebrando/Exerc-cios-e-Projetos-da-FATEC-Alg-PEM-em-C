/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[30], x, par, seqPar=0, testePar, maiorseqPar;
    
    
    
    for(x=0;x<30;x++){
        printf("Informe o %i° número da lista: ", (x+1));
        scanf("%i", &vetor[x]);
        
        testePar = vetor[x] % 2;
            
            
                if(testePar == 0 && seqPar == 0){
                    par++;
                    seqPar = par;
                    } else { 
                        if(testePar != 0){
                            par = 0;
                        } else {
                        if(testePar == 0 && seqPar > 0){
                            par++;
                            if(par > seqPar){
                                seqPar = par;
                             } 
                            }
                        }
                    }
                
    
         }
    printf("A maior sequencia de pares é %i", seqPar);

    return 0;    
            
    }
    
