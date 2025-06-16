#include <stdio.h>

int main(){
	
	float media;
	
	printf("insira a nota:\n");
	scanf("%f", &media);
	
	if(media >= 7.0){
		printf("aprovado(a).");
		
	}
	
	if(media >= 5.0 && media < 7.0){
		printf("direito a exame de recuperação.");
	
	}
	
	if(media < 5.0){
		printf("reprovado(a).");

	}
	
	
	
	return 0;
}
  
  
