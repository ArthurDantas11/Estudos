#include <stdio.h>
//varias vari�veis
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
	//ultilizando vari�veis para criar comandos matematicos
	soma = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divisao = a/b;
	//exibi��o dos resultados
	printf("resultado:\n");	
	printf("soma %d\n",soma);
	printf("subtra��o %d\n",subtracao);
	printf("multiplicacao %d\n",multiplicacao);
	printf("divisao %d\n",divisao);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
