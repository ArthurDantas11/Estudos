#include <stdio.h>

int main()
{
    int x;

    printf("TABUADA DO 1 AO 10\n");
    printf("Digite um numero:\n",x);
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++)
    {
       printf("%d x %d = %d\n",x, i, x*i);
    }
    

    return 0;
}