/* Implemente uma função que receba uma string como parâmetro e retorne
como resultado o número de vogais nessa string. Essa função deve obedecer ao
protótipo:*/

#include <stdio.h>
#include <stdlib.h>
#define N 20

int conta_vogais (char* str){
   int cont = 0;

    for (int i = 0; str != \0; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cont++;
        }
    }

    return cont;
}

int main(){

    char* string = (char*)malloc(sizeof(char)*N+1);

    printf("preencha a string a seguir (ate 20 caracteres):\n");
    fgets(string, N, stdin);

    int numero_vogais = conta_vogais(string);

    printf("A string tem %d vogais\n", numero_vogais);

    return 0;
}