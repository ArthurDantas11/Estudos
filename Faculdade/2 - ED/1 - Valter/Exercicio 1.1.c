/*1.1. Implemente uma funçao que indique se um ponto (x,y) está localizado den-
tro ou fora de um retângulo. O retângulo é difinido por seus vértices inferior es-
querdo (x0,y0) e superior direito (x1 y1). A função deve ter como valor de retor-
no 1, se o ponto estiver dentro do retângulo, e 0 caso contrário, obedecendo ao
protótipo:
int dentro_ret (int x0, int yo, int x1, int yl, int x, int y):*/

#include <stdio.h>

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y)
{
    if ((x >= x0 && x <= x1 && y >= y0 && y <= y1))
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int resultado = dentro_ret(0, 0, 10, 10, 5, 5); 
    
    if (resultado)
    {
        printf("DENTRO\n");
    }
    else
    {
        printf("FORA\n");
    }
    
    
    return 0;
}
