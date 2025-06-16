#include <stdio.h>
/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce
3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.*/
int main()
{
    int anos = 0;
    float altura_chico = 1.50, altura_ze = 1.10;

    while (altura_chico > altura_ze)
    {
        altura_chico += 0.02;
        altura_ze += 0.03;
        anos++;
    }

    printf("Altura de ze: %.2f\nAltura de chico: %.2f\nAnos passados: %d", altura_ze, altura_chico, anos);

    return 0;
}