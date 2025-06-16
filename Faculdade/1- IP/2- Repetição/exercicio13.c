/*Foi feita uma pesquisa para determinar o índice de mortalidade infantil em certo período. Faça um
programa que:
■■ leia o número de crianças nascidas no período;
■■ identifique o sexo (M ou F) e o tempo de vida de cada criança nascida.
O programa deve calcular e mostrar:
■■ a percentagem de crianças do sexo feminino mortas no período;
■■ a percentagem de crianças do sexo masculino mortas no período;
■■ a percentagem de crianças que viveram 24 meses ou menos no período. */
#include <stdio.h>

int main()
{
    int numero_criancas, mortes, cont_sexo_m = 0, cont_sexo_f = 0, meses_vida, cont_morte = 0, cont_meses = 0, cont_mortes_f = 0, cont_mortes_m = 0;
    char sexo;

    printf("quantas crianças nasceram nesse periodo?\n");
    scanf("%d", &numero_criancas);

    for (int i = 1; i <= numero_criancas; i++)
    {
        do
        {
            printf("qual sexo da crianca nascida?\nM - Masculino\nF - Feminino\n");
            scanf(" %c", &sexo);

            if (sexo == 'M' || sexo == 'm')
            {
                printf("Resgistrado! sexo masculino.\n");

                cont_sexo_m++;
            }
            else if (sexo == 'f' || sexo == 'F')
            {
                printf("Registrado! sexo feminino.\n");

                cont_sexo_f++;
            }
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        printf("Quantos meses a %dº crianca viveu durante o periodo?\n", i);
        scanf("%d", &meses_vida);

        if (meses_vida <= 24)
        {
            cont_meses++;
        }
        else if(meses_vida == 0)
        {
            if (sexo == 'm' || sexo == 'M')
            {
                cont_mortes_m++;
            }
            else if (sexo == 'f' || sexo == 'F')
            {
                cont_mortes_f++;
            }
            
        }
    }

    float percentual_mortas_feminino = (cont_mortes_f / (float)numero_criancas) * 100;
    float percentual_mortas_masculino = (cont_mortes_m / (float)numero_criancas) * 100;
    float percentual_ate_24_meses = (cont_meses / (float)numero_criancas) * 100;

    printf("\nResultados da pesquisa:\n");
    printf("Percentagem de crianças do sexo feminino mortas: %.2f%%\n", percentual_mortas_feminino);
    printf("Percentagem de crianças do sexo masculino mortas: %.2f%%\n", percentual_mortas_masculino);
    printf("Percentagem de crianças que viveram 24 meses ou menos: %.2f%%\n", percentual_ate_24_meses);


    return 0;
}