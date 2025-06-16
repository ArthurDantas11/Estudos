#include <stdio.h>

int main()
{

    int i = 1;
    // diferente do "while" o "do" executará pelo menos uma vez o bloco de comandos independente da condiçao do while.
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}