/******************************************************************************

// Este algoritmo verifica entre 30 números qual a maior sequência de pares
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
    
