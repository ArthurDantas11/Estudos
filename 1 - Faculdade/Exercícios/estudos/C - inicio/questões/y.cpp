#include <stdio.h>

int main(){
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float notafinal;
	float media;
	float m = 4;
	
	printf("insira a primeira nota do aluno:\n");
	scanf("%f", &nota1);
	
	printf("insira a segunda nota do aluno:\n");
	scanf("%f", &nota2);
	
	printf("insira a terceira nota do aluno:\n");
	scanf("%f", &nota3);
	
	printf("insira a quarta nota do aluno:\n");
	scanf("%f", &nota4);
	
	notafinal = nota1 + nota2 + nota3 + nota4; 
	media = notafinal/m;
	
	printf("media do aluno: %f\n", media);
	
	if(media >= 6.0){
		printf("aprovado(a)!\n");	
	}
	
	if(media < 6.0 && media >= 5.0){
		printf("direito a exame de ponto extra.\n");
	}
	
	if(media < 5.0){
		printf("reprovado(a)!\n");
	}
	

	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
