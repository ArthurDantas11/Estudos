#include <stdio.h>

int main()
{
    int n, fatorial=1;

    printf("digite o numero fatorial:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial*=i;

        printf("%d x %d = %d\n", fatorial, i, fatorial);
    }
    
    printf("fataorial de %d = %d", n, fatorial);

    return 0;
}
