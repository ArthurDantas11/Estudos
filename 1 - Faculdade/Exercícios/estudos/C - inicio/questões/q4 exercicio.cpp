#include <stdio.h>

int main(){
	
	float salario, porcentagem; 
	
	printf("insira o salario:\n");
	scanf("%f", &salario);
	
	printf("insira a %% do aumento:\n");
	scanf("%f", &porcentagem);
	
	porcentagem = porcentagem/100;
	salario = salario + (porcentagem*salario);	
	
	printf("novo salario: %.2f\n", salario);
	
	return 0;
}
