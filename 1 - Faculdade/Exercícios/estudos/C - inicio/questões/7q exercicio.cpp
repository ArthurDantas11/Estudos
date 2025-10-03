#include <stdio.h>

int main(){
	
	float kg_racao, g_racao, resto;
	
	printf("insira o peso do saco de racao:\n");
	scanf("%f", &kg_racao);
	
	printf("insira a quantidade de racao dada a cada gato:\n");
	scanf("%f", &g_racao);
	
	resto = kg_racao - (g_racao)*5;
	
	printf("quantidade restante de racao: %.1f\n", resto);
	
	return 0;
}
