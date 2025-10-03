#include <stdio.h>
#include <stdlib.h> // necessário para malloc

int main() {
    int *valores;

    valores = (int*) realloc(valores, 10 * sizeof(int)); // agora cabem 10 inteiros

    return 0;
}
