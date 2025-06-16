#include <stdio.h>

int main(){
	
	int nascimento, ano_atual, idade, ano_2050;
	
	printf("insira o ano em que voce nasceu:\n");
	scanf("%d", &nascimento);
	
	printf("insira o ano atual:\n");
	scanf("%d", &ano_atual);

	idade = ano_atual - nascimento;
	ano_2050 = 2050 - nascimento; 
	
	printf("sua idade e: %d\n", idade);
	printf("sua idade em 2050: %d\n", ano_2050);
	
	return 0;	 	
}
