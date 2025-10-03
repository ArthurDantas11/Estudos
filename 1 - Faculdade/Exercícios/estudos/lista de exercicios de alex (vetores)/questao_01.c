#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, v[10];
    
    printf("digite 10 numeros inteiros:\n");
    
    for ( i = 0; i < 10; i++)
    {
        
        scanf("%d", &v[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    
    
    return 0;
}
