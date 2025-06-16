#include <stdio.h>

int main(){
	
	int d;
	
	printf("insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("domingo.\n");
			break;
		case 2:
			printf("segunda.\n");
			break;
		case 3: 
			printf("terça.\n");
			break;
		case 4:
			printf("quarta.\n");
			break;
		case 5:
			printf("quinta.\n");
			break;
		case 6:
			printf("sexta.\n");
			break;
		case 7: 
			printf("sabado.\n");
			break;
		default:
			printf("valor invalido.\n");
			break;
	
	return 0;
	}

	
	
	
	
	
}
