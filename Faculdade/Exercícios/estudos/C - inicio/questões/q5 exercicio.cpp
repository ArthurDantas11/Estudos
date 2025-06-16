#include <stdio.h>

int main(){
	
	float pe = 12, jarda;
	float milha, medida, polegadas; 
	
	printf("insira as medidas:\n");
	scanf("%f", &medida);
	
	polegadas = pe*medida;
	jarda = medida/3;
	milha = jarda/1.760;
	
	printf("medida em polegadas: %f\n", polegadas);
	printf("medida em jardas: %f\n", jarda);
	printf("medida em milhas: %.3f \n", milha);
	
	return 0;
}
