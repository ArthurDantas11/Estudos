#include <stdio.h>
#include <string.h>
#define TAM 20

int main(int argc, char const *argv[])
{
   char s1[TAM] = {"logica de "}, s2[TAM] = {"programacao"};

   printf("antes do strcat:\n");
   puts(s1);
   puts(s2);

   strcat(s1, s2); 
   //função que permite unir duas strings

   printf("depois do strcat:\n");

   puts(s1);

    return 0;
}