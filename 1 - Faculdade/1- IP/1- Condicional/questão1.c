#include <stdio.h>

int numero1, numero2;

int main(){
    printf("digite um numero:\n");
    scanf("%d", &numero1);
   
    printf("digite um  numero:\n");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("o maior numero e: %d\n", numero1);
    }else{
        printf("o maior numero e: %d\n", numero2);
    }

    return 0;
}