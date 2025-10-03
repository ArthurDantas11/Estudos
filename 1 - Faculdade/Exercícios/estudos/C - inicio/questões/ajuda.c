#include <stdio.h>
/*faça um programa que preencham dois vetores, x e y cm 10 elementos inteiros cada. 
calcule mostre o vetor resultante da diferença entre x e y, ou seja todos os elementos que existem em x e n existem em 7 Você enviou Y*]*/
int main()
{
    
    int x[10], i, y[10], vd[10], cont = 0;

    printf("10 valores inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("mais 10 valores:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &y[i]);
    }

    printf("vetor da diferenca:\n");

    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (x[i] != y[j])
            {
                int k = 0; 
                vd[k++] = x[i];
                cont++; 

            }
            
        }
        
    }

    for  (i = 0; i < cont; i++)
    {
        printf("%d ", vd[i]);
    }
    

    return 0;
}    