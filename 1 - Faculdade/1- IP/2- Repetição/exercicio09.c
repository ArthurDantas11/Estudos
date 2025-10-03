#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, media, soma_das_medias=0, media_classe;
    int i, cont_reprovados=0, cont_aprovados=0, cont_exame=0;

    for (i = 1; i <= 6; i++)
    {
        printf("Digite a primeira nota do %d aluno\n", i);
        scanf("%f", &nota1);

        printf("digite a segunda nota do %d aluno\n", i);
        scanf("%f", &nota2);

        printf("media do %d aluno: %.2f\n", i, media = (nota1 + nota2)/2);
        
        media = (nota1 + nota2) / 2;
        
        if (media <= 3)
        {
            printf("situacao do aluno %d\nREPROVADO!\n");

            printf("media:%.1f\n", media);
            
            cont_reprovados++;
        }
        else if (media > 3 && media <= 6)
        {
            printf("situacao do aluno %d\nEXAME!\n");
            
            printf("media:%.1f\n", media);

            cont_exame++;
        }
        else
        {
            printf("situacao do aluno %d\nAPROVADO!\n");
            
            printf("media:%.1f\n", media);

            cont_aprovados++;
        }
        
        soma_das_medias += media;
       
    }
    
    media_classe= soma_das_medias/6;
    
    printf("total de alunos reprovados: %d\n", cont_reprovados);
    printf("total de alunos em exame: %d\n", cont_exame);
    printf("total de alunos aprovados: %d\n", cont_aprovados);
    printf("media total da classe: %.2f\n",media_classe);


    return 0;
}