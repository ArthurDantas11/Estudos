#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nomes[10][50] = {"arthur", "yasmin", "yan", "ermerson", "matheus","luiz", "erik", "felipe", "santiago", "alex"};
    char nome[50];
    int achei = 0; 

    printf("digite um nome qualquer:\n");
    scanf("%49s", &nome);

    for (int i = 0; i < 10; i++)
    {
        if (strcmp (nome, nomes[i]) == 0)
        {
            achei = 1;
        }
    }
    
    if (achei == 1)
    {
        printf("ACHEI!\n");
    }
    else
    {
        printf("NAO ACHEI.\n");
    }
    
    return 0;
}
