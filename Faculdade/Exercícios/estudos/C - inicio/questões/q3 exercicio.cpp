#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, mediaponderada;
	int peso1, peso2, peso3;
	
	
	printf("insira a nota 1 e o peso:\n");
	scanf("%f %d", &nota1, &peso1);
	
	printf("insira a nota 2 e o peso:\n");
	scanf("%f %d", &nota2, &peso2);
	
	printf("insira a nota 3 e o peso:\n");
	scanf("%f %d", &nota3, &peso3);
	
	
	mediaponderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1 + peso2 + peso3);
	
	printf("media ponderada: %.2f\n", mediaponderada);
	
	return 0; 
		
	
	
	
	
}
