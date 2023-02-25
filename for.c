/******************************************************************************

6. Dados dois números naturais m e n e duas sequências ordenadas com m e n números inteiros, 
obter uma única sequência ordenada contendo todos os elementos das sequências originais sem repetição.

Importante notar uso do for e como não precisa concatenar todos os for

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet1[] = {1, 1, 2, 3, 4, 8, 9}, m = 7;
    int vet2[] = {1, 3, 5, 7, 10}, n = 5;
    int n3 = m + n;
    int vet3[n3];
    int vet4[n3];
    int i=0, j=0, k=0, l=0;
    
    for(k=0; k < n3; k++){
        if(i<m && vet1[i] < vet2[j]){
            vet3[k] = vet1[i];
            i++; 
            
        }
                else {
                    vet3[k] = vet2[j];
                    j++;
                }
                printf("%d, " , vet3[k]);
                
    
    }
    
    vet4[0] = vet3[0];
    for(k=0; k<n3; k++){
        if (vet3[k] != vet3[k - 1]){
            vet4[l] = vet3[k];
            printf("%d, ", vet4[l]);
            l++;
        }
        
    }
    

    return 0;
}
