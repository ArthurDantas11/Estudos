#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[5];

    for ( i = 0; i < 5; i++)
    {
        printf("insira um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("dados inseridos!\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    
    
    return 0;
}
