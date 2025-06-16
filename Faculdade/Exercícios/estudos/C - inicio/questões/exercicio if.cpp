#include <stdio.h>

int main(){
	
	float nota_do_exame, nota_do_laboratorio, nota_semestral, media;
	
	printf("Digite a nota do laboratorio:\n");
	scanf("%f", &nota_do_laboratorio);
	
	printf("Digite a nota do exame final:\n");
	scanf("%f", &nota_do_exame);

	printf("Digite a nota semestral:\n");
	scanf("%f", &nota_semestral);
	
	media = (nota_do_exame*5 + nota_do_laboratorio*2 + nota_semestral*3)/10;
	
	printf("a Media do aluno foi: %f\n", media);
	
	if(media >=8 && media <= 10){
		printf("obteve conceito A\n");
	}
	if(media >=7 && media <8){
		printf("obteve conceito B\n");
	}
	if(media >= 6 && media <7){
		printf("obteve conceito C");
	}
	if(media >=5 && media <6){
		printf("obteve conceito D\n");
	}
	if(media >=0 && media <5){
		printf("obteve conceito E");
	}
	return 0;
}
