#include <stdio.h>
//varias variáveis
int main(){
	int a;
	int b;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;
	int valor;
	
	printf("digite o primeiro numero que deseja calcular:\n");
	scanf("%d",&a);
	
	printf("digite o segundo numero:\n");
	scanf("%d",&b);
	//ultilizando variáveis para criar comandos matematicos
	soma = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divisao = a/b;
	//exibição dos resultados
	printf("resultado:\n");	
	printf("soma %d\n",soma);
	printf("subtração %d\n",subtracao);
	printf("multiplicacao %d\n",multiplicacao);
	printf("divisao %d\n",divisao);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
