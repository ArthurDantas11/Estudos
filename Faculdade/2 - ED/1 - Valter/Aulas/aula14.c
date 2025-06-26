#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x;
    float y;
}Ponto_centro_geometrico;

Ponto_centro_geometrico *criar_um_ponto()
{
    Ponto_centro_geometrico* ponto =(Ponto_centro_geometrico *)malloc(sizeof(Ponto_centro_geometrico));
    if (!ponto)
    {
        printf("memoria insuficiente...\n");
        exit(1);
    }

    return ponto;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
