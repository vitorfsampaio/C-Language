#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Insira o segundo numero:\n");
	scanf("%d", &n2);
	
	if (n1 > n2){
		printf("O maior: %d.\n", n1);
	} else if(n1 < n2){
		printf("O maior: %d.\n", n2);
	} else{
		printf("Os numeros sao iguais!");
	}
	
	system("pause");
}
