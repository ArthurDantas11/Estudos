#include <stdio.h>

int main()
{

    int i;

    for (int i = 0; i <= 10; i++)
    {

        if (i == 5)
        {
            continue;
        }
        
        printf("%d\n", i);
    }

    return 0;
}
// CONTINUE: USADO PARA PAUSAR O COMANDO QUANDO A CONDIÇÃO EXIGIDA FOR VERDADEIRA E EXECUTAR O PROXIMO, PULANDO A REPETIÇÃO CONDICIONADA.