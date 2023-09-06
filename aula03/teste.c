#include <stdio.h>

int main(){
	
	int idade = 0;
	float peso = 0.0;
	
	printf("Insira sua idade atual:\n");
	scanf("%d", &idade);
	printf("Insira seu peso atual:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Peso informado: %.1f.\n", peso);
}
