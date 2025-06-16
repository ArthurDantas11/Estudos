#include <stdio.h>

/*Faça um programa para ler o código, o sexo (M — masculino; F — feminino) e o número de horas/
aula dadas mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale
R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido (levando em
consideração os descontos explicados a seguir) de todos os professores. Mostre também a média dos
salários líquidos dos professores do sexo masculino e a média dos salários líquidos dos professores do
sexo feminino. Considere:
■■ desconto para homens, 10%, e, para mulheres, 5%;
■■ as informações terminarão quando for lido o código = 99999. */

int main(int argc, char const *argv[])
{
    int codigo, sexo, n_horas_aulas, cont_sexo_m = 0, cont_sexo_f = 0;
    float valor_horas, salario_bruto, salario_liquido, media_salarios_m, media_salarios_f, salario_total = 0;

    do
    {
        printf("digite seu codigo:\n");
        scanf("%d", &codigo);

        printf("informe seu sexo:\n 1 - Masculino\n 2 - Feminino\n");
        scanf("%d", &sexo);
        switch (sexo)
        {
        case 1:
            printf("Sexo masculino registrado!\n\n");
            cont_sexo_m++;

            break;

        case 2:
            printf("Sexo feminino registrado!\n\n");
            cont_sexo_f++;

            break;

        default:
            printf("Sexo INVALIDO!\n");
            return 1;
        }

        printf("Digite o numero de horas/aula dadas mensalmente:\n");
        scanf("%d", &n_horas_aulas);

        valor_horas = n_horas_aulas * 30.00;
        salario_bruto = valor_horas;

        if (sexo == 1)
        {
            salario_liquido = salario_bruto - (salario_bruto * 0.1);
            salario_total += salario_liquido;
            media_salarios_m = salario_total/cont_sexo_m;
            printf("Informacoes:\ncodigo: %d\nSexo: Masculino\nSalario bruto: %.2f\nSalario liquido: %.2f\n", codigo, salario_bruto, salario_liquido);
        }
        else if (sexo == 2)
        {
            salario_liquido = salario_bruto - (salario_bruto * 0.05);
            salario_total += salario_liquido;
            media_salarios_f = salario_total/cont_sexo_f;;
            printf("Informacoes:\ncodigo: %d\nSexo: feminino\nSalario bruto: %.2f\nSalario liquido: %.2f\n", codigo, salario_bruto, salario_liquido);
        }

    } while (codigo != 99999);

    if (sexo == 1)
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.1);
        salario_total += salario_liquido;
        media_salarios_m = salario_total/cont_sexo_m;
        printf("Media salarial:%.2f\n", media_salarios_m);
    }
    else if (sexo == 2)
    {
        salario_liquido = salario_bruto - (salario_bruto * 0.05);
        salario_total += salario_liquido;
        media_salarios_m = salario_total/cont_sexo_f;
        printf("Media salarial:%.2f\n", media_salarios_f);
    }
    
    

    return 0;
}
