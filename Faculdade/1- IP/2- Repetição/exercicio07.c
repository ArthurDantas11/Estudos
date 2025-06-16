#include <stdio.h>

int main()
{
    int k = 1, j = 0, resultado;
    

    for (int i = 3; i <= 8; i++)
    {
      
        resultado = j + k;
        j=k;
        k=resultado;
        
      printf("%d\n", k);
    }
    
    return 0;
}