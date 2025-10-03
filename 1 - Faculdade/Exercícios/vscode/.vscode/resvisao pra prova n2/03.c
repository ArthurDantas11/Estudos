#include <stdio.h>
#define TAM 5
/*03. Faça um programa em Linguagem C que receba um vetor de 15 elementos inteiros, mostre o
maior elemento, a quantidade de números pares e a média dos números ímpares.*/

int main(int argc, char const *argv[])
{
    int vetor[TAM], maior = 0, aux = 0, par = 0,cont_impar = 0;
    float media; 
    printf("Preencha o vetor de %d elementos: \n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (vetor[i] > vetor[j]) // Verificando se o vetor na posição "i" é maior que o vetor na posição "j". 
            {
                maior = vetor[i]; //Atribuíndo o valor do vetor na posição "i" a variavél "maior".
            }
        }

        if (vetor[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            cont_impar++;
        }
    }

    media = (float)cont_impar / TAM;

    printf("Numeros inseridos: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\nMaior elemento: %d\n", maior);

    printf("Quantidade de numeros pares: %d\n", par);

    printf("Media de numeros impares: %.1f\n", media);

    return 0;
}
