#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[10], segundo_vetor[10];

    printf("digite 10 valores inteiros positivos:\n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("\nvetores pares:\n");
    
    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d/2 = %d\n",v[i], v[i]/2);
        }
        
    }

    printf("\nvetores impares:\n");
    
    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("%dx3 = %d\n", v[i], v[i]*3);
        } 
        
    }
    
    
    return 0;
}
