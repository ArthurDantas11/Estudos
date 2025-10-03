
#include <stdio.h>
#define produtos 12

int main()
{
    int preco_unitario, cont_baratos = 0, cont_normal = 0, cont_caro = 0;
    float custo_estocagem, imposto, preco_final, classificacao_calculada, maior_preco = 0.0, menor_preco = __FLT_MAX__, media_valores_adicionais, custo_estocagem_total = 0, imposto_total = 0;
    char refrigeracao, categoria;

    for (int i = 1; i <= produtos; i++)
    {
        printf("Digite o preco unitario:\n");
        scanf("%d", &preco_unitario);

        if (preco_unitario <= 20)
        {
            do
            {
                printf("Produto nao nescessita de refrigeracao.\n");
                printf("Qual a categoria?\nA - Alimentacao\nL - limpeza\nV - vestuario\n");
                fflush(stdin);
                scanf("%c", &categoria);
            } while ((categoria != 'A' && categoria != 'a' && categoria != 'L' && categoria != 'l' && categoria != 'V' && categoria != 'v'));

            if (categoria == 'A' || categoria == 'a')
            {
                printf("categoria registrada: Alimentacao.\n");

                custo_estocagem = 2.00;
            }
            else if (categoria == 'L' || categoria == 'l')
            {
                printf("categoria registrada: Limpeza.\n");

                custo_estocagem = 3.00;
            }
            else if (categoria == 'V' || categoria == 'v')
            {
                printf("categoria registrada: Vestuario\n");

                custo_estocagem = 4.00;
            }
        }
        else if (preco_unitario <= 50)
        {
            do
            {
                printf("Qual a calssificacao de refrigeracao??\nS - Nescessita de refrigeracao\nN - Nao nescessita de refrigeracao\n");
                fflush(stdin);
                scanf("%c", &refrigeracao);

            } while (refrigeracao != 'S' && refrigeracao != 's' && refrigeracao != 'N' && refrigeracao != 'n');

            if (refrigeracao == 'S' || refrigeracao == 's')
            {
                printf("Nescessita de refrigeracao.\n");

                
                custo_estocagem = 6.00;
            }
            else if (refrigeracao == 'N' || refrigeracao == 'n')
            {
                printf("Nao nescessita de refrigeracao.\n");
                
                
                custo_estocagem = 0.00;
            }
        }
        else
        {
            do
            {
                printf("Qual a calssificacao de refrigeracao?\nS - Nescessita de refrigeracao\nN - Nao nescessita de refrigeracao\n");
                fflush(stdin);
                scanf("%c", &refrigeracao);
            } while (refrigeracao != 'S' && refrigeracao != 's' && refrigeracao != 'N' && refrigeracao != 'n');

            if (refrigeracao == 'S' || refrigeracao == 's')
            {
                printf("Nescessita de refrigeracao.\n");
                do
                {
                    printf("Qual a categoria?\nA - Alimentacao\nL - limpeza\nV - vestuario\n");
                    fflush(stdin);
                    scanf("%c", &categoria);
                } while (categoria != 'A' && categoria != 'a' && categoria != 'L' && categoria != 'l' && categoria != 'V' && categoria != 'v');

                if (categoria == 'A' || categoria == 'a')
                {
                    printf("categoria registrada: Alimentacao.\n");

                    custo_estocagem = 5.00;
                }
                else if (categoria == 'L' || categoria == 'l')
                {
                    printf("categoria registrada: Limpeza.\n");

                    custo_estocagem = 2.00;
                }
                else if (categoria == 'V' || categoria == 'v')
                {
                    printf("categoria registrada: Vestuario\n");

                    custo_estocagem = 4.00;
                }
            }
            else if (refrigeracao == 'N' || refrigeracao == 'n')
            {
                printf("Nao nescessita de refrigeracao.\n");

                do
                {
                    printf("Qual a categoria?\nA - Alimentacao\nL - limpeza\nV - vestuario\n");
                    fflush(stdin);
                    scanf("%c", &categoria);
                } while (categoria != 'A' && categoria != 'a' && categoria != 'L' && categoria != 'l' && categoria != 'V' && categoria != 'v');

                if (categoria == 'A' || categoria == 'a')
                {
                    printf("categoria registrada: Alimentacao.\n");

                    custo_estocagem = 0.00;
                }
                else if (categoria == 'L' || categoria == 'l')
                {
                    printf("categoria registrada: Limpeza.\n");

                    custo_estocagem = 1.00;
                }
                else if (categoria == 'V' || categoria == 'v')
                {
                    printf("categoria registrada: Vestuario\n");

                    custo_estocagem = 0.00;
                }
            }
        }

        if (!((categoria != 'A' && refrigeracao != 'S') || (categoria != 'a' && refrigeracao != 's')))
        {
            imposto = preco_unitario * 0.02;
        }
        else
        {
            imposto = preco_unitario * 0.04;
        }

        preco_final = preco_unitario + custo_estocagem + imposto;

        printf("Informacoes do %d produto:\nPreco unitario: %d\nRefrigeracao: %c\n", i, preco_unitario, refrigeracao );

        if (preco_unitario <= 20 || preco_unitario > 50)
        {
            printf("Categoria de refrigeracao: %c\n", categoria);
        }
        
        printf("Custo de estocagem: %.2f\n", custo_estocagem);

        if (preco_final <= 20)
        {
            printf("\nclassificado como: Barato.\n\n");

            cont_baratos++;
        }
        else if (preco_final <= 100)
        {
            printf("\nclassificado como: Normal.\n\n");

            cont_normal++;
        }
        else
        {
            printf("\nclassificado como: Caro.\n\n");

            cont_caro++;
        }

        custo_estocagem_total += custo_estocagem;
        imposto_total += imposto;

        if (preco_final > maior_preco)
        {
            maior_preco = preco_final;
        }
        if (preco_final < menor_preco)
        {
            menor_preco = preco_final;
        }
    }

    media_valores_adicionais = (imposto_total + custo_estocagem_total) / produtos;

    printf("A quantidade de produtos com classificacao barato:%d\nA quantidade de produtos com classificacao Normais: %d\n A quantidade de produtos com classificacao Caros: %d\n", cont_baratos, cont_normal, cont_caro);
    printf("imposto total:%.2f\n", imposto_total);
    printf("A media dos valores adicionais:%.2f\n", media_valores_adicionais);
    printf("O maior preco: %.2f\n", maior_preco);
    printf("O menor preco: %.2f\n", menor_preco);

    return 0;
}
