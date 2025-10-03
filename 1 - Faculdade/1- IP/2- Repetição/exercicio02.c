#include <stdio.h>

int main()
{
    int n, i, fatorial;
    float e=1;

    printf("digite um valor para N:\n");
    scanf("%d", &n);

    for (i = 1; i <= n ; i++)
    {
        fatorial = 1;
        for(int j = 1; j <= i ; j++)
        {
            fatorial *= j;
        }
        e += 1/(float)fatorial;
        
    }

    printf("%f\n", e);



    return 0; 
}