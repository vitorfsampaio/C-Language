#include <stdio.h>

int main(){
	int num = 1;
	int contador;
	
	printf("Quantas vezes quer repetir?\n");
	scanf("%d", &contador);
	
	while(num <= contador){
		printf("teste %d.\n", num);
		num++;
	}
	
	system("pause");
}
