#ifndef TAD_VETOR
#define TAD_VETOR

/*Implemente uma função que receba como parâmetro um vetor de números
reais (vet) de tamanho n e retorne quantos números negativos estão armazenados
nesse vetor. Essa função deve obedecer ao protótipo:*/

int negativos (int n, float* vet);

/* Implemente uma função que receba como parâmetro um vetor de números
inteiros (vet) de tamanho n e retorne quantos números pares estão armazenados
nesse vetor. Essa função deve obedecer ao protótipo:*/

int pares (int n, int* vet);

/* Implemente uma função que receba como parâmetro um vetor de números
inteiros (vet) de tamanho n e inverta a ordem dos elementos armazenados nesse
vetor. Essa função deve obedecer ao protótipo:*/

void inverte (int n, int* vet);

/*3.4. Implemente uma função que permita a avaliação de polinômios. Cada polinômio é definido por um vetor que contém seus coeficientes. Por exemplo, o
polinômio de grau 2, 3x²+2x+12, terá um vetor de coeficientes igual a
v[ ]=(12,2,3). A função deve obedecer ao protótipo:

Onde o parâmetro poli é o vetor com os coeficientes do polinômio, grau é o
grau do polinômio, e x é o valor para o qual o polinômio deve ser avaliado.*/

double avalia (double* poli, int grau, double x);

/*3.5. Implemente uma função que calcule a derivada de um polinômio. Cada polinômio é representado como exemplificado no exercício anterior. A função
deve obedecer ao protótipo:*/

/*onde out é o vetor, de dimensão grau-1, no qual a função deve guardar os coeficientes do polinômio resultante da derivada.*/

void deriva (double* poli, int grau, double* out);

#endif