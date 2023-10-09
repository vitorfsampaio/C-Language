#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float v1, v2;
	
	printf("Insira o primeiro valor:\n");
	scanf("%f", &v1);
	printf("Insira o segundo valor:\n");
	scanf("%f", &v2);
	
	system("cls");
	
	if(v1 > v2){
		printf("%.2f é maior que %.2f.\n", v1, v2);
	} else if(v2 > v1){
		printf("%.2f é maior que %.2f.\n", v2, v1);
	} else{
		printf("Valores iguais!");
	}
	
	system("pause");
}
