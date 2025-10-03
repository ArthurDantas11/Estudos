#include <stdio.h>
#include <ctype.h>
#define TAM 21
int main(int argc, char const *argv[])
{
    char frase[TAM];
    int cont = 0;
    
    printf("Digite a frase:\n");
    fgets(frase, TAM, stdin);

    for (int i = 0; i < TAM; i++)
    {
        int c = tolower(frase[i]); //tolower: Se o caractere for uma letra maiúscula (A-Z), ele é convertido para minúscula (a-z).Se não for uma letra maiúscula, o caractere permanece o mesmo.
        if (frase[i] >= 'a' && frase[i] <= 'z')
        {
           cont++; 
        }
    }

    printf("Frase: %s", frase);
    printf("Quantidade de letras digitadas: %d\n", cont);
    
    return 0;
}
