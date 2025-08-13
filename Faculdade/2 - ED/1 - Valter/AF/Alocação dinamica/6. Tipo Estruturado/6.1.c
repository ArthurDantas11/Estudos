#include <stdio.h>
#include <stdlib.h>

/*6.1. Considere uma estrutura para representar um ponto no espaço 2D e implemente uma função que indique se um dado ponto p está 
localizado dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior esquerdo v1 e superior 
direito v2. A função deve retornar 1 caso o ponto esteja localizado dentro do retângulo, e 0 caso contrário. Essa função deve obedecer
ao protótipo: 
int dentroRet (Ponto* v1, Ponto* v2, Ponto* p);*/

typedef struct Ponto
{
    float x;
    float y;
}Ponto;

Ponto* ponto_preenche(float x, float y);

int dentroRet (Ponto* v1, Ponto* v2, Ponto* p);

int main()
{
    Ponto* p = ponto_preenche(3, 3);
    Ponto* v1 = ponto_preenche(0, 0);
    Ponto* v2 = ponto_preenche (5, 5);
    
    int dentro_fora = dentroRet(v1, v2, p);
    if (dentro_fora)
    {
        printf("Ponto localizado DENTRO do retangulo\n");
    }
    else
    {
        printf("Ponto NAO localizado dentro do retangulo");
    }

    free(v1);
    free(v2);
    free(p);
    
    return 0;
}

int dentroRet (Ponto* v1, Ponto* v2, Ponto* p)
{
    if (p->x >= v1->x && p->x <= v2->x && p->y >= v1->y && p->y <= v2->y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Ponto* ponto_preenche(float x, float y)
{
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;

    return p;
}