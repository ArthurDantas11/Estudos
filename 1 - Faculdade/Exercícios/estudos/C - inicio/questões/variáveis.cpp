#include <stdio.h>

#define texto "entrada e saida de dados."
//define = constante
int main(){
	
	printf("%s\n:",texto);
	
	int idade;
	//int = variável
	float altura;
	//float = variável para numeros decimais com virgula
	char nome [50];
	//char = variavel para caracteres (50 é o numero limite definido para as caracteres
	printf("qual sua idade?\n");
	scanf("%d",&idade);
	
	printf("qual sua altura?\n");
	scanf("%f",&altura);
	
	printf("qual seu nome?\n");
	scanf("%s",&nome);
	
	printf("dados informados:\n");
	printf("idade: %d\n",idade);
	printf("altura: %.2f\n",altura);
	printf("nome: %s\n",nome);
	
	return 0;
}
	
