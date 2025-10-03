#include <stdio.h>

int main()
{

    float altura, peso;

    printf("qual a altura da pessoa?\n");
    scanf("%f", &altura);

    printf("qual o peso da pessoa?\n");
    scanf("%f", &peso);

    if (altura < 1.20)
    {
        if (peso <= 60)
        {
            printf("classificacao: A\n");
        }
        else if (peso <= 90)
        {
            printf("classificacao: D\n");
        }
        else
        {
            printf("classificacao: G\n");
        }
    }
    else if (altura < 1.70)
    {
        if(peso <= 60)
        {
            printf("calssificacao: B\n");
        }
        else if (peso <= 90)
        {
            printf("classificacao E\n");
        }
        else
        {
            printf("calssificacao: H\n");
        }
    }
    else if (altura > 1.70)
    {
        if(peso <= 60)
        {
            printf("calssificacao: C\n");
        }
        else if (peso <= 90)
        {
            printf("classificacao F\n");
        }
        else
        {
            printf("calssificacao: I\n");
        }
    }
    return 0;
}