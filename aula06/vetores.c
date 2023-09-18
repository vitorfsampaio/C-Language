#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int v[5];
	int i;
	int s = 0;
	
	for(i=0;i<5;i++){
		printf("Insira um número a ser somado:\n");
		scanf("%d", &v[i]);
	}
	system("cls");

	for(i=0;i<5;i++){
		s += v[i];
	}
	
	printf("Soma: %d", s);
}
