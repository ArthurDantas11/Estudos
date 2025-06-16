#include <stdio.h>

int main(){
	
	float nota1;
	float nota2;
	float nota3;
	float soma;
	float media;
	
	printf("insira a nota:\n");
	scanf("%f", &nota1);
	
	printf("insira a segunda nota:\n");
	scanf("%f", &nota2);
	
	printf("insira a terceira nota:\n");
	scanf("%f", &nota3);
	
	soma = nota1 + nota2 + nota3;
	media = soma/3;
	
	
	printf("media aritimedica: %f\n", media);
	
	
	
	return 0;
}
