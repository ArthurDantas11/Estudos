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

