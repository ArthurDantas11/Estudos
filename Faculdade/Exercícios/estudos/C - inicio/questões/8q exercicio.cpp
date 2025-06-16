#include <stdio.h>

int main(){
	
	float altura_degrau, altura_desejada, numero_de_degraus;
		
	printf("qual a altura do degrau?\n");
	scanf("%f", &altura_degrau);
	
	printf("qual a altura que deseja chegar?\n");
	scanf("%f", &altura_desejada);
	
	numero_de_degraus = altura_desejada/altura_degrau;
	
	printf("o numero de degrais e: %.0fm", numero_de_degraus);
	
	return 0;
}
