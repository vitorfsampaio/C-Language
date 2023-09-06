#include <stdio.h>

int main(){
	int A=0, B, soma, sub, mult, div;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A*B;
	div = A/B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Sub: %d.\n", sub);
	printf("Mult: %d.\n", mult);
	printf("Div: %d.\n", div);
}
