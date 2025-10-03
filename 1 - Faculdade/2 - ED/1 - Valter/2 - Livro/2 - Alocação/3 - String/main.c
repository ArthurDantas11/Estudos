#include "TAD_STRING/string.c"
int main()
{
    char **string = (char**)malloc(sizeof(char*)*5);
    
    string[0] = "Arthur";
    string[1] = "Dantas";
    string[2] = "Perez";
    string[3] = "da";
    string[4] = "Silva";

    imprime_string(string, 5);

    char s[] = "Zork";
    char c[] = "Zork";
    //shift_string(s);
    
    int retorno = string_cmp(s,c);

    printf("%d\n", retorno);

    char* novo = duplica(string[0]);

    puts(novo);

    return 0;
}