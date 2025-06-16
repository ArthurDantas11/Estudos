#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura, area;

    do
    {
        printf("digite a base do triangulo:\n");
        scanf("%f", &base);

    } while (base <= 0);

    do
    {
        printf("digite a altura do triangulo:\n");
        scanf("%f", &altura);

    } while (altura <= 0);

    (area = (base * altura) / 2);

    printf("area do triangulo e igual a: %.1f", area);

    return 0;
}