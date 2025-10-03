#include <stdio.h>
// Em uma fábrica trabalham homens e mulheres divididos em três classes: 
// ■■ trabalhadores que fazem até 30 peças por mês — classe 1;
// ■■ trabalhadores que fazem de 31 a 50 peças por mês — classe 2; 
// ■■ trabalhadores que fazem mais de 50 peças por mês — classe 3. 
// A classe 1 recebe salário mínimo. A classe 2 recebe salário mínimo mais 3% deste salário por peça, 
// acima das 30 peças iniciais. A classe 3 recebe salário mínimo mais 5% desse salário por peça, acima das 30 
// peças iniciais.
// Faça um programa que receba o número do operário, o número de peças fabricadas no mês, o sexo do 
// operário, e que também calcule e mostre:
// ■■ o número do operário e seu salário; 
// ■■ o total da folha de pagamento da fábrica; 
// ■■ o número total de peças fabricadas no mês; 
// ■■ a média de peças fabricadas pelos homens; 
// ■■ a média de peças fabricadas pelas mulheres; e
// ■■ o número do operário ou operária de maior salário. 
// A fábrica possui 15 operários.
#define OPERARIOS 15

int main()
{
    int num_operario, num_pecas, classe_op, sexo, total_pecas = 0, cont_m = 0, cont_f = 0, total_pecas_m = 0, total_pecas_f = 0;
    float total_pagamento = 0, salario_operario, salario_min = 1400, media_pecas_m, media_pecas_f;

    for (int i = 1; i <= OPERARIOS; i++)
    {
        printf("digite o numero do %d operario:\n", i);
        scanf("%d", &num_operario);

        printf("digite o numero de pecas fabricadas no mes:\n");
        scanf("%d", &num_pecas);

       do
       {
       printf("digite o sexo do %d operario\n1 - Masculino\n2 - Feminino\nInsira:");
        scanf("%d", &sexo);

       } while (sexo != 1 && sexo != 2);
       
        switch (sexo)
        {
        case 1: 
            cont_m++;
            total_pecas_m += num_pecas;
            break;
        case 2:
            cont_f++;
            total_pecas_f += num_pecas;
            break;
        default:
            break;
        }

        if(num_pecas <= 30)
        {
            classe_op = 1;
            salario_operario = salario_min;
        }
        else if(num_pecas <= 50)
        {
            classe_op = 2;
            salario_operario = salario_min + ((salario_min * 0.03) * num_pecas);
        }
        else
        {
            classe_op = 3;
            salario_operario = salario_min + ((salario_min * 0.05) * num_pecas);
        }
        printf("\nNumero do operario %d\nsalario:%.2f", i, salario_operario);

        total_pagamento += salario_operario;
        total_pecas += num_pecas; 
    }

    media_pecas_m = total_pecas_m / cont_m;
    
    printf("folha de pagamento total da fabrica:%d\n", total_pagamento);
    

    return 0;
}