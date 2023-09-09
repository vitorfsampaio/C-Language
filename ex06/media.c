#include <stdio.h>
#include <stdlib.h>

int main(){
	float trab, aval, exam, media;
	
	printf("Insira a nota do trabalho:\n");
	scanf("%f", &trab);
	printf("Insira a nota da avaliacao:\n");
	scanf("%f", &aval);
	printf("Insira a nota do exame :\n");
	scanf("%f", &exam);
	
	media = (trab*2 + aval*3 + exam*5)/10;
	
	printf("Media: %.2f.\n", media);
	printf("\n");

	if (media <= 5.0){
		printf("Conceito E\n");
	} else if(media > 5 && media < 6){
		printf("Conceito D\n");
	} else if(media >= 6 && media < 7){
		printf("Conceito C");
	} else if(media >= 7 && media < 8){
		printf("Conceito B");
	} else{
		printf("Conceito A");
	}
	
}
