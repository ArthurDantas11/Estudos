#include <stdio.h>
#include <stdlib.h>
#include "vet.h"

int negativos (int n, float* vet)
{
    int cont_negativo = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            cont_negativo++;
        }
    }
    
    return cont_negativo;
}

int pares (int n, int* vet)
{
    int cont_pares = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cont_pares++;
        }
    }

    return 0;
}

void inverte (int n, int* vet)
{
    for (int i = n; i = 0; i--)
    {
        
    }
    
}
