#include <stdio.h>

int main()
{

    float numero_de_horas, valor_hora, salario_minimo = 450.00, salario, auxilio_alimentacao, salario_final;
    char turno, categoria;

    for (int i = 1; i <= 10; i++)
    {
        printf("Codigo do funcionario na empresa: 0%d\n", i);

        printf("Insira seu turno de trabalho:\n M (Matutino)\n V (Vespertino)\n N (Noturno)\n");
        fflush(stdin);
        scanf("%c", &turno);

        switch (turno)
        {
        case 'M':
            printf("Turno: Matutino\n");

            break;
        case 'V':
            printf("Turno: Vespertino\n");

            break;
        case 'N':
            printf("Turno: Noturno\n");

            break;
        default:
            printf("Turno incorreto\n");

            break;
        }

        printf("Iforme qual sua categoria\n O (operario)\n G (gerente)\n");
        fflush(stdin);
        scanf("%c", &categoria);

        switch (categoria)
        {
        case 'O':
            printf("Categoria: Operario\n");

            break;
        case 'G':
            printf("Categoria: Gerente\n");

            break;
        default:
            printf("Categoria incorreta\n");
            break;
        }

        if (categoria == 'G' && turno == 'N')
        {
            valor_hora = salario_minimo * 0.18;
        }
        else if (categoria == 'G' && turno == 'M' || 'v')
        {
            valor_hora = salario_minimo * 0.15;
        }
        else if (categoria == 'O' && turno == 'N')
        {
            valor_hora = salario_minimo * 0.13;
        }
        else
        {
            valor_hora = salario_minimo * 0.10;
        }

        printf("numero de horas trabalhadas:\n");
        scanf("%f", &numero_de_horas);

        salario = valor_hora*numero_de_horas;

        if (salario <= 300.00)
        {
            auxilio_alimentacao = salario*0.20;
        }
        else if (salario > 300 && salario <= 600)
        {
            auxilio_alimentacao = salario*0.15;
        }
        else
        {
            auxilio_alimentacao = salario*0.5;
        }

        salario_final = salario + auxilio_alimentacao;
        
        printf("Numero de hortas trabalhadas: %.1f\n\n valor da hora trabalhada: %.1f\n\n salario inicial: %.1f\n\n auxilio alimentacao: %.1f\n\n salario final: %.1f\n\n",  numero_de_horas, valor_hora, salario, auxilio_alimentacao, salario_final);
    }

    return 0;
}