#include <stdio.h>

/*Faça um programa que receba vários números, calcule e mostre:
■■ a soma dos números digitados;
■■ a quantidade de números digitados;
■■ a média dos números digitados;
■■ o maior número digitado;
■■ o menor número digitado;
■■ a média dos números pares;
■■ a porcentagem dos números ímpares entre todos os números digitados.
Finalize a entrada de dados com a digitação do número 30.000.*/

int main(int argc, char const *argv[])
{
    int numero, soma = 0, quantidade, maior_n = 0, menor_n = 0, n_anterior = 0, npar_anterior = 0, cont_numero = 0, cont_numero_par = 0, soma_numeros_pares, cont_numero_impar = 0;
    float media_numeros, media_par, porcentagem_impar;

    do
    {
        printf("Digite um numero:\n");
        scanf("%d", &numero);

        soma += numero;
       
        if (numero % 2 == 0)
        {
            cont_numero_par++;
            soma_numeros_pares = numero + npar_anterior;
            npar_anterior = numero;
        }
        else
        {
            cont_numero_impar++;
        }

        printf("Soma: %d\n", soma);

        cont_numero++;

        printf("Quantidade de numeros digitados ate agora: %d\n", cont_numero);

        media_numeros = soma / cont_numero;

        printf("Media dos numeros: %.2f\n", media_numeros);
        
        if (numero > n_anterior)
        {

            if (maior_n < numero)
            {
                maior_n = numero;
            }
            if (n_anterior < menor_n)
            {
                menor_n = n_anterior;
            }
            
        }
        if (numero < n_anterior)
        {
            if (maior_n < numero)
            {
                maior_n = numero;
            }
            if (numero > menor_n)
            {
                menor_n = numero;
            }
               

        }

        n_anterior = numero;
        
        printf("Maior numero %d\n", maior_n);
        printf("Menor numero %d\n", menor_n);

        printf("Media de numeros pares: %.2f\n", ((float)soma_numeros_pares / cont_numero_par));

        porcentagem_impar = (cont_numero_impar * 100) / cont_numero;

        printf("Porcetagem de numeros impares: %.2f\n", porcentagem_impar);

    } while (numero != 30000);

    return 0;
}
