/******************************************************************************

// Este algortimo simula um caixa eletrônico
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float saldo, saque, saldo_S, deposito, saldo_D;
    int oP;
    
    saldo = 5000;
    
    printf ("Digite a opção desejada:\n1 - Saldo \n2 - Saque \n3 - Depósito\n");
    scanf("%i", &oP);
    
    switch(oP){
        case 1:{
            printf ("Seu saldo é de %.2f R$", saldo);
            break;
        }
        case 2:{
            printf ("Escolha o valor a ser sacado: ");
            scanf ("%f", &saque);
             if(saldo >= saque){
                 printf ("Valor aprovado para saque. Aguarde um momento.\n");
                 saldo_S = saldo - saque;
                 printf ("Seu novo valor disponível é de: %.2f R$", saldo_S);
                 break;
             } else { 
                   printf ("Operação inválida, valor maior do que o saldo");
                   break;
             }
        case 3:{
            printf ("Digite o valor a ser depositado: ");
            scanf ("%f", &deposito);
            saldo_D = saldo + deposito;
            printf ("Parabéns, seu novo valor em conta é %.2f R$", saldo_D);
            break;
        }     
        default: {
            printf ("Operação inválida");
        }
        }
    }
    
    

    return 0;
}
