#include <stdio.h>
#include <string.h>

int main()
{
    char string[10];

    printf("digite algo: \n");
    scanf("%s", &string); 
    fflush(stdin);

    printf("Resultado: %s", string);
    return 0;
}
