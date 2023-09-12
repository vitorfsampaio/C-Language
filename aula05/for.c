#include <stdio.h>

int main(){
	
	int i;
	int qtd;
	
	printf("Quantas vezes quer repetir?\n");
	scanf("%d", &qtd);
	
	for(i = 1; i <= qtd; i++){
		printf("Rep %d.\n", i);
	}
}
