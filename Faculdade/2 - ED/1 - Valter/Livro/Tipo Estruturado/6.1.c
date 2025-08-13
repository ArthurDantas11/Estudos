/* Considere uma estrutura para representar um ponto no espaço 2D e implemente uma função que indique se um dado ponto p está localizado 
dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior esquerdo v1 e superior direito v2. A função deve 
retornar 1 caso o ponto esteja localizado dentro do retângulo, e 0 caso contrário. Essa função deve obedecer
ao protótipo: int dentroRet (Ponto* v1, Ponto* v2, Ponto* р):
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct 
{
    int x;
    int y;
}Vetor;

int dentroRet (Ponto* v1, Ponto* v2, Ponto* p);

Ponto cria_ponto ();

int main()
{
    

    return 0;
}

Ponto cria_ponto ()
{
    Ponto* p = (Ponto*)mallloc(sizeof(Ponto));
}

int dentroRet (Ponto* v1, Ponto* v2, Ponto* p)
{
    if (v1->x < p->x && v2->x > p->x && v1->y > p->y && v2->y)
    {
        
    }
    
}


