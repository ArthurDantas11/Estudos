#include <stdio.h>
#define ALUNOS 5
/*04. Faça um algoritmo em Linguagem C que receba: (2,5 pontos)
a. As notas de 15 alunos em 5 provas diferentes e armazene-as em uma matriz 15x5;
b. As matrículas (número inteiro) dos 15 alunos e armazene-as em um vetor de 15
posições.
O programa deverá calcular e mostrar:
a. Para cada aluno, a matrícula, a média aritmética das cinco provas e a situação do aluno
(aprovado, reprovado ou recuperação);
b. A média da classe.*/

int main(int argc, char const *argv[])
{
    int matriculas[ALUNOS];
    float media, notas[ALUNOS][5], soma = 0, media_classe, soma_classe =0, medias[ALUNOS];

    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Digite os numeros da matricula do %d aluno: \n", i+1);
        scanf("%d", &matriculas[i]);
    }

    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Atribua as notas do aluno (%d)\n", matriculas[i]);
        for (int j = 0; j < 5; j++)
        {   
            printf("Nota %d:\n", j+1);
            scanf("%f", &notas[i][j]);
        }   
    }

    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += notas[i][j]; //Variavel acumuladora para acumular a soma dos elementos da matriz
            medias[i] = soma/5; //Vetor usado para armazenar as notas de cada aluno
            
        }

        soma = 0; // reiniciar a variavel soma para as proximas notas
    }
    
    
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("\nAluno (%d)\nMedia aritimedica: %.1f \nSituacao: ", matriculas[i], medias[i]);
        if (medias[i] >= 7.0)
        {
            printf("APROVADO\n");
        }
        else
        {
            printf("REPROVADO\n");
        }
        
    }
    
    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; i < 5; i++)
        {
            soma_classe += notas[i][j];             
        }
    }
    
    
    
    return 0;
}
