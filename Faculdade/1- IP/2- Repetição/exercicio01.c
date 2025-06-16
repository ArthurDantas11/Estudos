#include <stdio.h>

//Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
//a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
//b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
//c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.
//Faça um programa que determine o salário atual desse funcionário. 
int main()
{
    float salarioInical = 1000, aumentoSalario = 0.015;
   

    printf("salario inicial: 1000.00\n");

    for (int i = 2006; i <= 2024 ; i++)
    {
        salarioInical += salarioInical*aumentoSalario;

        printf("salario no ano %d - %.2f\n", i, salarioInical);
        
        aumentoSalario *= 2;
    }
    

    return 0;
}