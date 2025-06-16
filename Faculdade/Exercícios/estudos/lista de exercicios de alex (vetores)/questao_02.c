#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("vetor: ");

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    
    printf("\nvetor inverso: ");
    
    for ( i = 9; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}
