#include <stdio.h>

/*Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.
O programa também deve calcular e mostrar:
■■ o número de candidatos do sexo feminino;
■■ o número de candidatos do sexo masculino;
■■ a idade média dos homens que já têm experiência no serviço;
■■ a porcentagem dos homens com mais de 45 anos entre o total dos homens;
■■ o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
■■ a menor idade entre as mulheres que já têm experiência no serviço. 
*/

int main(int argc, char const *argv[])
{
    int idade, i=0, candidatos_masculino=0, candidatas_femininas=0, mulheres_idade_inferior_s, sim_experiencia=0, soma_idade=0, homens_S_experiencia=0, menor_idade_mulheres=1000, cont_homens_mais_idade; 
    char sexo, experiencia; 

    do
    {
        i++;
        printf("\nCandidato n 0%d\n\n", i);
        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        soma_idade+= idade;
        

        printf("Informe seu sexo:\nM - Masculino \nF - Feminino \nSOMENTE LETRAS MAIUSCULAS.\n");
        fflush(stdin);
        scanf("%c", &sexo);

        printf("O candidato tem experiencia no servico?\nS - Sim\nN - Nao\nSOMENTE LETRAS MAIUSCULAS.\n");
        fflush(stdin);
        scanf("%c", &experiencia);

        if (sexo == 'M')
        {
            candidatos_masculino++;
            if (idade > 45)
            {
                cont_homens_mais_idade++;
            }
            
            if (experiencia == 'S')
            {
                homens_S_experiencia++;
                sim_experiencia++;
            }
            
        }
        else if (sexo == 'F')
        {
            candidatas_femininas++;
            if (experiencia == 'S')
            {
                sim_experiencia++;
                if (idade < menor_idade_mulheres)
                {
                    menor_idade_mulheres = idade;
                }
                
                if (idade < 21)
                {
                    mulheres_idade_inferior_s++;
                }
                
            }
            
        }

        

    } while (idade != 0);

    printf("Numero de candidatas do sexo feminino: %d\n", candidatas_femininas);
    printf("Numero de candidatos do sexo masculino: %d\n", candidatos_masculino);
    printf("Idade media dos homens que ja tem experiencia no servico: %.1f\n", soma_idade/(float)homens_S_experiencia);
    printf("%.1f%% Canditados homens com mais de 45 anos\n", (cont_homens_mais_idade*100)/(float)candidatos_masculino);
    printf("o numero de mulheres com idade inferior a 21 anos e com experiência no servico; %d\n", mulheres_idade_inferior_s);
    printf("Menor idade das mulheres com experiencia no servico: %d\n", menor_idade_mulheres);

    
    
    return 0;
}
