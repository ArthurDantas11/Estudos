#include <stdio.h>
#define TOTAL_VALORES 5 // Para teste, usando 5 valores; altere para 50, se necessário

int main() {
    int i, num, maior, menor;

    // Lê o primeiro valor e inicializa as variáveis
    printf("Digite o 1º valor: ");
    scanf("%d", &num);

    maior = num; // Inicializa maior com o primeiro número
    menor = num; // Inicializa menor com o primeiro número

    // Lê os próximos valores
    for (i = 2; i <= TOTAL_VALORES; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num; // Atualiza o maior número
        }
        if (num < menor) {
            menor = num; // Atualiza o menor número
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
