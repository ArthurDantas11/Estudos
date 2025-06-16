#include <stdio.h>

int main()
{
    float divida, valorDivida, juros, valorParcela;

    printf("digite o valor da divida:\n");
    scanf("%f", &divida);

    for (int i = 0; i <=  12; i+=3)
    {
        if (i==0)
        {
            juros = 0;
        }
        else if(i == 3)
        {
            juros = 0.1;
        }
        else if (i == 6)
        {
            juros = 0.15;
        }
        else if (i==9)
        {
            juros = 0.20;
        }
        else 
        {
            juros = 0.25;
        }
        valorDivida = divida+(divida*juros);
        
        printf("\nvalor da divida: %.2f /valor do juros: %.2f /numero de parcelas: %d /valor das parcelas:%.2f", valorDivida, juros*=divida, i, valorDivida/i);  
    }

    return 0;
}