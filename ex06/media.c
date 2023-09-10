#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float trab, aval, exam, media;
	
	printf("Insira a nota do trabalho:\n");
	scanf("%f", &trab);
	printf("Insira a nota da avaliação:\n");
	scanf("%f", &aval);
	printf("Insira a nota do exame :\n");
	scanf("%f", &exam);
	
	media = (trab*2 + aval*3 + exam*5)/10;
	
	if(media > 10 || media < 0){
	printf("Nota inválida. Verifique os valores novamente!\n");
	} else{
		printf("Média: %.2f.\n", media);
		printf("\n");

	if (media <= 5.0){
		printf("Conceito E\n");
	} else if(media > 5 && media < 6){
		printf("Conceito D\n");
	} else if(media >= 6 && media < 7){
		printf("Conceito C\n");
	} else if(media >= 7 && media < 8){
		printf("Conceito B\n");
	} else{
		printf("Conceito A\n");
	}
	}
	
	system("pause");
}
