#include <stdio.h>

int main()
{
    int sexo;
    float altura, peso_ideal;

    printf("informe seu sexo:\n");
    printf("1 - Masculino\n2 - Feminino\n");
    scanf("%d", &sexo);

    switch (sexo)
    {
    case 1:
        printf("Sexo: Masculino\n");

        break;

    case 2:
        printf("Sexo: Feminino\n");

        break;

    default:
        printf("Invalido\n");

        break;
    }

    printf("qual sua altura? ");
    scanf("%f", &altura);

    if (sexo = 1)
    {
        peso_ideal = (72.7 * altura) - 58;
    }
    else if (sexo = 2)
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("Invalido\n");
    }

    printf("Seu peso ideal e: %.2f\n", peso_ideal);

    return 0;
}