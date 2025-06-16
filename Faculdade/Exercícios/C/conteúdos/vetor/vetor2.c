#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[5] = {10, 20, 30, 40, 50};
    float soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma+= v[i];
    }

    printf("Resultado: %.2f", soma/5);
    
    return 0;
}
