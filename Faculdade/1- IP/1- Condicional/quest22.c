#include <stdio.h>
// Faça um programa que receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre:
// ■■ O imposto, conforme a tabela a seguir.
// sALário BAsE % soBrE o sALári o BAsE
// < R$ 200,00 isento
// Entre R$ 200,00 (inclusive) e R$ 450,00 (inclusive) 3%
// Entre R$ 450,00 e R$ 700,00 8%
// >= R$ 700,00 12%
// ■■ A gratificação, de acordo com a tabela a seguir.
// sALário BAsE TEMPo dE
// sErViço grATiFiCAção
// Superior a R$ 500,00
// Até 3 anos 20
// Mais de 3 anos 30
// Até R$ 500,00
// Até 3 anos 23
// Entre 3 e 6 anos 35
// De 6 anos para cima 33
// ■■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
// ■■ A categoria, que está na tabela a seguir.
// sALário Líquido CLAssiFiCAção
// Até R$ 350,00 A
// Entre R$ 350,00 e R$ 600,00 B
// De R$ 600,00 para cima C
int main()
{

    float salarioBase, gratificacao, salarioLiquido, imposto;
    int tempoServico;

    printf("digite o seu salario base:\n");
    scanf("%f", &salarioBase);
   
    printf("qual tempo de servico:\n");
    scanf("%d", &tempoServico);
   
    if (salarioBase < 200)
    {
        imposto = 0;
    }
    else if (salarioBase <= 450)
    {
        imposto = salarioBase * 0.03;
    }
    else if (salarioBase < 700)
    {
        imposto = salarioBase * 0.08;
    } 
    else 
    {
        imposto = salarioBase * 0.12;
    }

    printf("valor do imposto: %.2f\n", imposto);

    
    if (salarioBase > 500)
    {
        if (tempoServico < 3)
        {
            gratificacao = 20;
        }
        else
        {
            gratificacao = 30;
        }
    }
    else
    {
        if (tempoServico < 3)
        
           gratificacao = 23; 
        
        else if (tempoServico <= 6)
        
            gratificacao = 35;
        else

            gratificacao = 33;
    }
    
    salarioLiquido = salarioBase - imposto + gratificacao;

    printf("valor do salario liquido:%.2'f\n", salarioLiquido);

    if (salarioBase < 350)
    {
        printf("classificacao A\n");
    }
    else if (salarioBase <= 600)
    {
        printf("classificacao B\n");
    }
    else
    {
         printf("classificacao C\n");
    }
        
    return 0;
}