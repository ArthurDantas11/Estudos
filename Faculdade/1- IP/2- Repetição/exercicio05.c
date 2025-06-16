#include <stdio.h>

int main()
{
    int numero_termos, i, j, expoente, x, resultado_potencia = 1, fatorial;
    float s;
    printf("digite o numero de termos:\n");
    scanf("%d", &numero_termos);

    printf("digite um valor positivo para X\n");
    scanf("%d", &x);

    for (expoente = 1; expoente <= numero_termos; expoente++)
    {

        if (expoente % 2 == 0)
        {
            x = (-x);
        }

        resultado_potencia *= x;

        fatorial = 1;

        for (i = 1; i <= numero_termos; i++)
        {
            fatorial *= i;
        }

         s = (resultado_potencia/(float)fatorial);
        
    }
   
    printf("\ns = %.2f \n resultado potencia = %d \n fatorial = %d ", s, resultado_potencia, fatorial);

    return 0;
}