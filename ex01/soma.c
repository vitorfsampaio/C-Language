#include <stdio.h>

int main(){
	int v1, v2, v3, v4, total;
	
	printf("Vamos descobrir a soma entre 4 numeros!\n");
	printf("Digite 4 valores em sequencia:\n");
	scanf("%d",&v1);
	scanf("%d",&v2);
	scanf("%d",&v3);
	scanf("%d",&v4);
	
	total = (v1 + v2 + v3 + v4);
	
	printf("Soma: %d", total);
}
