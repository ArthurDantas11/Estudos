#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[9], soma;

    for (i = 0; i < 9; i++)
    {
        printf("digite um numero inteiro:\n");
        scanf("%d", &v[i]);
        
        soma+= v[i];

    }

    for ( i = 0; i < 9; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("numero primo %d \n", v[i]);
        }
    }
    

    printf("Resultado: %d", soma);
    
    return 0;
}