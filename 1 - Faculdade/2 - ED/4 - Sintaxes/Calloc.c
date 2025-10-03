#include <stdio.h>
#include <stdlib.h> // necessário para calloc

int main() {
    int *ptr;

    int *valores = (int*) calloc(5, sizeof(int)); // aloca espaço para 5 inteiros inicializados com 0

    free(valores); // libera a memória alocada
    
    return 0;
}

//É parecido com o malloc, mas inicializa tudo com zero.