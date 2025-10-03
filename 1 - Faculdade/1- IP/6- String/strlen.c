#include <stdio.h>
#include <string.h>
#define TAM 50

int main(int argc, char const *argv[])
{
    char str[TAM];
    int i;

    printf("digite um texto:\n");
    gets(str);
    i = strlen(str);

    printf("tamanho do texto: %d\n", i);

    for (int j = 0; j < i ; j++)
    {
        printf("%c", str[j]);
    }
    

    return 0;
}
