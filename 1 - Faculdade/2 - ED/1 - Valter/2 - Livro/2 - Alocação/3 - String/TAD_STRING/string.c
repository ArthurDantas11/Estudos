#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int maior_comprimento(char *v[], int n)
{
    int maior = 0;
    
    for (int i = 0; i < n; i++)
    {
        int tamanho_string = 0;
        
        while (v[i] != '\0')
        {
            tamanho_string++;
        }
        
        if (tamanho_string > maior)
        {
            maior = tamanho_string;
        }
    }
    
    return maior;
}

void imprime_string(char *string[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", string[i]);
    }
}

int ocorrencia(char* str, char c)
{
    int cont = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            cont++;
        }

        i++;
    }
    
    return cont;
}

int string_cmp(char* string1, char* string2)
{
    int i = 0;
    while (string1[i] != '\0' || string2[i] != '\0')
    {
        if (string1[i] != string2[i])
        {
            return 0;
        }

        i++;
    }
    
    return 1;
}

void shift_string(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'z')
        {
            str[i] = 'a';
            i++;
        }
        else if (str[i] == 'Z')
        {
            str[i] = 'A';
            i++; 
        }
        
        str[i] += 1;
        i++;
    }
    
    puts(str);
}

void concatena(char* destino, char* origem)
{
    
    int i = 0;
    
    while (destino[i] != '\0')
    {
        i++;
    }
    
    int j = 0;
    
    while (origem[j] != '\0')
    {
        destino[i] = origem[j];
        j++;
        i++;
    }
    
    puts(destino);
}

char* duplica(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    
    char* novo = (char*)malloc(sizeof(char)*i+1);

    int j = 0;

    while (s[j] != '\0')
    {
        novo [j] = s[j];
        j++;
    }
    
    novo[j] = '\0';
    
    return novo;
}