#include <stdio.h>

int main(){
	int idade = 0;
	float peso = 0;
	float altura = 0;
	
	printf("Digite sua idade:\n");	
	scanf("%d", &idade);
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %f.\n", peso);
	printf("Altura informada: %f.\n", altura);
}
