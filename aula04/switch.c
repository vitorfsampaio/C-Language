#include <stdio.h>

int main(){
	int dia;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-Feira");
			break;
		case 3:
			printf("Terça-Feira");
			break;
		case 4:
			printf("Quarta-Feira");
			break;
		case 5:
			printf("Quinta-Feira");
			break;
		case 6:
			printf("Sexta-Feira");
			break;
		case 7:
			printf("Sábado");
			break;
		default:
			printf("Dia inválido!");
			break;	
	}
	
}
