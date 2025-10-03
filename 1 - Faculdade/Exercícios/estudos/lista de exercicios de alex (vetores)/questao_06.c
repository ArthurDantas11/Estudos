#include <stdio.h>
#define numeroqlqr 3

int main(int argc, char const *argv[])
{
    int i,j = 0, k = 0, numero[numeroqlqr], maior = 0, menor = 0, par[numeroqlqr], impar[numeroqlqr], aux, aux2, tamanho_par = 0, tamanho_impar = 0;

    printf("Digite %d numeros inteiros\n", numeroqlqr);

    for (i = 0; i < numeroqlqr; i++)
    {
        printf("%d numero:\n", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par[j++] = numero[i];
            tamanho_par++;
        }
        if (numero[i] % 2 != 0)
        {
            impar[k++] = numero[i];
            tamanho_impar++;   
        }
    }

    for (int l = 0; l < numeroqlqr; l++)
    {
        for (int m = 0; m < numeroqlqr; m++)
        {
            if (par[l] > par[m]) //Verificando qual o maior elemento do vetor.
            {
                aux = par[l]; 
                par[l] = par[m];
                par[m] = aux; //Alinhando os vetores em ordem crescente.
            }
            
        }
    }
    for (int n = 0; n < numeroqlqr; n++)
    {
        for (int o = 0; o < numeroqlqr; o++)
        {
            if (impar[n] < impar[o])
            {
                aux2 = par[n];
                par[n] = par[o];
                par[o] = aux2;
            }
            
        }
        
    }
    printf("numeros digitados:\n");

    for (int p = 0; p < numeroqlqr; p++) 
    {
        printf("%d ", numero[p]);
    }
    
    printf("\nnumeros pares:\n");

    for (int c = 0; c < tamanho_par; c++)
    {
        printf("%d ", par[c]);
    }

    printf("\nnumeros impares:\n");
    
    for (int a = 0; a < tamanho_impar; a++)
    {
        printf("%d ", impar[a]);
    }

    return 0;
}

