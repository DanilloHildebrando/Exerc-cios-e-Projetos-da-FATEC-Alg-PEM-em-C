/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//5- Reutilizando o algoritmo do caixa eletrônico, implemente um laço faça enquanto que verifique se o usuário deseja continuar, caso a variável coletada for igual 1 reinicie o laço, mantendo o valor do saldo.


#include <stdio.h>

int main()
{
    
    float saldo = 5000, saque, saldo_S, deposito, saldo_D;
    int oP;
    
    
    do{
    printf ("\nDigite a opção desejada:\n1 - Sair \n2 - Saldo \n3 - Saque \n4 - Depósito\n");
    scanf("%i", &oP);
    
    switch(oP){
        case 2:{
            printf ("Seu saldo é de %.2f R$", saldo);
            break;
        }
        case 3:{
            printf ("Escolha o valor a ser sacado: ");
            scanf ("%f", &saque);
             if(saldo >= saque){
                 printf ("Valor aprovado para saque. Aguarde um momento.\n");
                 saldo_S = saldo - saque;
                 printf ("Seu novo valor disponível é de: %.2f R$", saldo_S);
                 saldo = saldo_S;
                 break;
             } else { 
                   printf ("Operação inválida, valor maior do que o saldo");
                   break;
             }
        case 4:{
            printf ("Digite o valor a ser depositado: ");
            scanf ("%f", &deposito);
            saldo_D = saldo + deposito;
            printf ("Parabéns, seu novo valor em conta é %.2f R$", saldo_D);
            saldo = saldo_D;
            break;
        }     
        case 1:{
            printf ("Obrigado por usar nossos serviços");
            break;
        }
        default: {
            printf ("Operação inválida");
        }
        }
    
    }
    } while(oP != 1);
    
    

    return 0;
}