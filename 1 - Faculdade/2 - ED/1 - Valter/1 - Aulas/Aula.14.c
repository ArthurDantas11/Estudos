#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Vetor;

typedef struct
{
    Ponto centro;
    float raio;
}Circulo;


void imprime_struct(Ponto *p1, Ponto *p2)
{
    printf("O ponto fornecido foi: (%.2f %.2f)", p1->x, p1->y);
}

void le_ponto(Ponto *p1, Ponto *p2)
{
    printf("Digite as coordenadas:\n");
    scanf("%f %f", &p1->x, &p1->y);
}

Ponto *criar_um_ponto()
{
    Ponto* p1 =(Ponto *)malloc(sizeof(Ponto));
    if (!p1)
    {
        printf("memoria insuficiente...\n");
        exit(1);
    }

    return p1;
}

Circulo *criar_um_circulo()
{
    Circulo* cir =(Circulo *)malloc(sizeof(Circulo));
    if (!cir)
    {
        printf("memoria insuficiente...\n");
        exit(1);
    }

    return cir;
}

float calcula_distancia (Ponto* p, Ponto* q)
{
    return sqrt(pow(p->x - q->x, 2) + pow(p->y - q->y, 2));
}

int interior (Circulo* c, Ponto* p)
{
    return distancia;
}

int main(int argc, char const *argv[])
{
    Ponto *p1 = criar_um_ponto();
    Circulo *cir = criar_um_circulo(); 
    float distancia = calcula_distancia(p1, p1);
    
    // printf("O ponto fornecido foi: (%.2f %.2f)", p1->x, p1->y);

    le_ponto(&p1->x, &p1->y);

    cir->centro.x = p1->x;
    cir->centro.y = p1->y;
    cir->raio = 10;

    imprime_struct(&p1->x, &p1->y);

    printf("distancia: %.2f", distancia);

    free(p1);

    return 0;
}