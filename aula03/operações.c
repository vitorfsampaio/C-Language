#include <stdio.h>

int main(){
	int A, B, soma, sub, mult, div;
	
	printf("Insira o primeiro valor\n");
	scanf("%d", &A);
	printf("Insira o segundo valor\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	div = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtração: %d.\n", sub); 
	printf("Multiplicação: %d.\n", mult); 
	printf("Divisão: %d.\n", div);  
}
