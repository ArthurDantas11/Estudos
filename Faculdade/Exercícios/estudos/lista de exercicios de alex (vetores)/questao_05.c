#include <stdio.h>
#define numeros 20

int main(int argc, char const *argv[])
{
    int i, vetor_1[numeros], vetor_2[numeros], diferenca[numeros], mult[numeros], soma[numeros];

    printf("digite %d numeros inteiros:\n", numeros);

    for (i = 0; i < numeros; i++)
    {
        scanf("%d", &vetor_1[i]);
    }

    printf("digite %d numeros inteiros:\n", numeros);

    for (i = 0; i < numeros; i++)
    {
        scanf("%d", &vetor_2[i]);
    }

    for (i = 0; i < numeros; i++)
    {
        diferenca[i] = vetor_1[i] - vetor_2[i];
        soma[i] = vetor_1[i] + vetor_2[i];
        mult[i] = vetor_1[i]*vetor_2[i];
    }
    
    printf("vetor 1: ");
    
    for (i = 0; i < numeros; i++)
    {
        printf("%d ", vetor_1[i]);
    }
    
    printf("\nvetor 2: ");

    for (i = 0; i < numeros; i++)
    {
        printf("%d ", vetor_2[i]);
    }

    printf("\nvetor da diferenca: ");

    for (i = 0; i < numeros; i++)
    {
        printf("%d ", diferenca[i]); 
    }

    printf("\nvetor da soma: ");
        
    for (i = 0; i < numeros; i++)
    {
        printf("%d ", soma[i]);
    }

    printf("\nvetor da multiplicacao: ");

    for (i = 0; i < numeros; i++)
    {
        printf("%d ", mult[i]);
    }

    return 0;
}
