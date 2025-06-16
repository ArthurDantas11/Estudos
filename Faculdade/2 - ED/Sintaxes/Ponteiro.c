#include <stdio.h>

//Um ponteiro é uma variável que armazena o endereço de outra variável na memória.

int main() {
    int x = 10;
    int *p = &x; // ponteiro "p" armazena o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor armazenado em p (endereco): %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // acessa o conteúdo de x.

    return 0;
}