/* Implemente uma função que indique se um ponto (x,y) está localizado dentro ou fora de um retângulo. O retângulo é definido por
seus vértices inferior esquerdo (x0,y0) e superior direito (x1,y1). A função deve ter como valor de retorno 1, se o ponto estiver
dentro do retângulo, e 0 caso contrário, obedecendo ao protótipo:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Ponto;

Ponto *cria_ponto();

int dentro_ret(Ponto *p0, Ponto *p1, Ponto *p);

int main()
{
    Ponto *p0 = cria_ponto();
    Ponto *p1 = cria_ponto();
    Ponto *p = cria_ponto();
\
    p0->x = 3;
    p0->y = 3;
    p1->x = 7;
    p1->y = 7;

    printf("digite os pontos X e Y para saber se esta dentro do retangulo:\nX:");
    scanf("%d", &p->x);
    printf("Y:");
    scanf("%d", &p->y);

    int retorno = dentro_ret(p0, p1, p);

    if (!retorno)
    {
        printf("O ponto esta dentro do retangulo!\n");
    }
    else
    {
        printf("O ponto NAO esta dentro do retangulo!\n");
    }

    return 0;

    free(p0);
    free(p1);
    free(p);
}

Ponto *cria_ponto()
{
    Ponto *ponto = (Ponto*)malloc(sizeof(Ponto));

    if (!ponto)
    {
        printf("memoria insuficiente...\n");
        exit(1);
    }

    return ponto;
}

int dentro_ret(Ponto *p0, Ponto *p1, Ponto *p)
{
    if (p->x > p0->x && p->x < p1->x && p->y > p0->y && p->y < p1->y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}