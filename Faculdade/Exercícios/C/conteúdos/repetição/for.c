#include <stdio.h>

int main()
{
    int x,y, auxi;

    printf("digite 2 valores:\n");
    scanf("%d %d", &x, &y);

    if(x > y)
    {
    auxi = x;
    x = y;
    y = auxi;
    }
    for (int i = x; i <= y; i++)
        {
            printf("%d\n", i);
        }
    return 0; 
}