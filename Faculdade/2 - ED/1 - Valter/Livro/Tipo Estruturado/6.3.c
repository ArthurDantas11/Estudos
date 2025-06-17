/*6.3. Considere as declarações a seguir para representar o cadastro de alunos de
uma disciplina e implemente uma função que imprima o número de matrícula, o
nome, a turma e a média de todos os alunos aprovados na disciplina.
struct aluno {
char nome [81]:
char matricula[8];
char turma;
float pl:
float p2:
float p3;
typedef struct aluno Aluno;
Assuma que o critério para aprovação é dado pela média das três provas (p1,
p2 e p3). A função recebe como parâmetros o número de alunos e um vetor de
ponteiros para os dados dos alunos. Essa função deve obedecer ao protótipo:
void imprime_aprovados (int n, Aluno** turmas);*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[81];
    char matricula[8];
    char turma;
    float pl;
    float p2;
    float p3;
} Aluno;

void imprime_aprovados(int n_alunos, Aluno **turmas);

Aluno *cria_aluno();

float calcula_media(float nota1, float nota2, float nota3);

int main()
{
    int n_alunos;

    printf("Quantos Alunos ha na classe?\n");
    scanf("%d", &n_alunos);
   

    Aluno **turma = (Aluno **)malloc(sizeof(Aluno *) * n_alunos);

    if (turma == NULL)
    {
        printf("Erro: memoria insuficiente para alocar turma!\n");

        exit(1);
    }

    for (int i = 0; i < n_alunos; i++)
    {
        turma[i] = cria_aluno();
    }

    printf("ha %d alunos em sua classe! preecha os dados de cada um abaixo:\n", n_alunos);

    for (int i = 0; i < n_alunos; i++)
    {
        printf("0%d\n", i+1);
        
        getchar();
        
        printf("Nome: ");
        fgets(turma[i]->nome, 81, stdin);

        printf("\nN Matricula: ");
        scanf("%8s", turma[i]->matricula);
        getchar();

        printf("\nTurma: ");
        scanf("%c", &turma[i]->turma);
        getchar();

        printf("\nNOTAS\nnota 1: ");
        scanf("%f", &turma[i]->pl);

        printf("\nnota 2: ");
        scanf("%f", &turma[i]->p2);

        printf("\nnota 3: ");
        scanf("%f", &turma[i]->p3);
    }

    imprime_aprovados(n_alunos, turma);

    for (int i = 0; i < n_alunos; i++)
    {
        free(turma[i]);
    }

    free(turma);
    
    return 0;
}

Aluno *cria_aluno()
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));

    return aluno;
}

void imprime_aprovados(int n_alunos, Aluno **turmas)
{
    float media[n_alunos];

    for (int i = 0; i < n_alunos; i++)
    {
        printf("nome: %s", turmas[i]->nome);

        printf("N Matricula: %s\n", turmas[i]->matricula);

        printf("Turma: %c\n", turmas[i]->turma);

        printf("nota 1: %.1f", turmas[i]->pl);

        printf("\nnota 2:  %.1f", turmas[i]->p2);

        printf("\nnota 3:  %.1f", turmas[i]->p3);

        media[i] = calcula_media(turmas[i]->pl, turmas[i]->p2, turmas[i]->p3);

        if (media[i] >= 7)
        {
            printf("Situacao: Aprovado!");
        }
        else
        {
            printf("Situacao: Reprovado!");
        }
    }
}

float calcula_media(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}