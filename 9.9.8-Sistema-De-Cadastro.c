/******************************************************************************

// Este algorítmo faz o cadastro de clientes e verifica se o valor digitado para o CPF já foi cadastrado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float matriz[10][3], comp[10], mediaIdade, media;
    int x, y=0, ads=0, gecom=0, eventos=0, rh=0, existe;
    
    for(x=0;x<10;x++){
        printf("Digite o CPF do candidato %i : ",(x +1));
        scanf("%f", &matriz[x][0]);
    
        
        while (x > 0){
            do{    
                existe=0;
                for(y=0; y<10; y++){
                    comp[y] = matriz[(x)][0];
                    if (comp[y] == matriz[x][0]){
                    existe == 1;
                        printf("CPF já cadastrado, digite outro %i : ", (x +1));
                        scanf("%f", &matriz[x][0]);
                break;
                                }
                        }
            }while(existe==1);
         break;
        }
        
        
        printf("Digite a idade do candidato %i  : ", (x +1));
        scanf("%f", &matriz[x][1]);
        mediaIdade += matriz[x][1];
        
        printf("Digite o curso escolhido pelo candidato %i, \n1-ADS, \n2-GECOM, \n3-Eventos, \n4-RH : ", (x +1));
        scanf("%f", &matriz[x][2]);
        
        
        if(matriz[x][2] == 1){
            ads++;
        } else {
            if(matriz[x][2] == 2){
                gecom++;
            } else {
                if(matriz[x][2] == 3){
                    eventos++;
                } else {
                    if(matriz[x][2] == 4){
                        rh++;
                        } 
                    }
                }
            
            }
            
        }
    
        media = mediaIdade / 10;
        printf("A quantidade de inscritos foi: %i em ADS, %i em GECOM %i em Eventos %i em RH e a média de idade é %.2f", ads, gecom, eventos, rh, media);
        
}

    
   
