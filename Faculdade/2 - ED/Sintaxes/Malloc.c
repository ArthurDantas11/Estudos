#include <stdio.h>
#include <stdlib.h> // necessário para malloc

int main() {
    int *ptr;

    ptr = (int*) malloc(sizeof(int)); // aloca memória para 1 inteiro

    if (ptr == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    *ptr = 42;
    printf("Valor armazenado: %d\n", *ptr);

    free(ptr); // libera a memória alocada
    return 0;
}

// Explicando:

// sizeof(int): quanto de memória 1 inteiro ocupa (geralmente 4 bytes).

// (int*): fazemos um cast para deixar claro que estamos lidando com um ponteiro para inteiro.

// free(ptr): libera a memória, SEMPRE faça isso depois de usar!