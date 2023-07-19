#include <stdio.h>

int menor(int i, int n, int vet[n])
{   if (i == n-1) return vet[i];
    else 
    {   int aux = menor(i+1, n, vet);
        if(vet[i] < aux) return vet[i];
        else return aux;
    }
}

int maior(int i, int n, int vet[n])
{   if (i == n-1) return vet[i];
    else 
    {   int aux = maior(i+1, n, vet);
        if(vet[i] > aux) return vet[i];
        else return aux;
    }
}

int main()
{   int vet[]={3, 2, 5, 4, 1, 8};
    printf("O menor é %d\n", menor(0, 6, vet));
    printf("O maior é %d\n", maior(0, 6, vet));
    return 0;

}
