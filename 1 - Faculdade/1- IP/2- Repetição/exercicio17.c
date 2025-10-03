/*Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário, João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará seu salário
integralmente na caderneta de poupança, que rende 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, que rende 5% ao mês. O programa deverá calcular e mostrar a
quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor
pertencente a Carlos.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float salario_carlos, salario_joao;
    int meses = 0;

    printf("Informe o salario do funcionario chamado carlos:\n");
    scanf("%f", &salario_carlos);

    salario_joao = salario_carlos/3;

    do
    {
        meses++;

        salario_carlos+= salario_carlos*0.02;
        salario_joao += salario_joao*0.05;

    } while (salario_joao <= salario_carlos);

    if (salario_joao > salario_carlos)
    { 
        printf("foram %d meses para que o salario de joao, que agora e RS%.2f, ultrapassase o salario do carlos(RS%.2f).\n", meses, salario_joao, salario_carlos);
    }
    else if (salario_joao = salario_carlos)
    {
        printf("foram %d meses para que o salario de joao, que agora e RS%.2f, fosse igual ao salario do carlos(RS%.2f).\n", meses, salario_joao, salario_carlos);
    }
    
    return 0;
}
