#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float v1, v2, v3;
	
	printf("Insira o 1º valor:\n");
	scanf("%f", &v1);
	printf("Insira o 2º valor:\n");
	scanf("%f", &v2);
	printf("Insira o 3º valor:\n");
	scanf("%f", &v3);
	
	system("cls");
	
	if(v1 > v2 && v1 > v3 && v2 > v3){
		printf("Maior: %.2f.\n", v1);
		printf("Médio: %.2f.\n", v2);
		printf("Menor: %.2f.\n", v3);
	} else{
		if(v1 > v2 && v1 > v3 && v3 > v2){
			printf("Maior: %.2f.\n", v1);
			printf("Médio: %.2f.\n", v3);
			printf("Menor: %.2f.\n", v2);	
		} else{
			if(v2 > v1 && v2 > v3 && v1 > v3){
				printf("Maior: %.2f.\n", v2);
				printf("Médio: %.2f.\n", v1);
				printf("Menor: %.2f.\n", v3);
			} else{
				if(v2 > v1 && v2 > v3 && v1 < v3){
					printf("Maior: %.2f.\n", v2);
					printf("Médio: %.2f.\n", v3);
					printf("Menor: %.2f.\n", v1);
				} else{
					if(v3 > v1 && v3 > v2 && v1 > v2){
						printf("Maior: %.2f.\n", v3);
						printf("Médio: %.2f.\n", v1);
						printf("Menor: %.2f.\n", v2);
					} else{
						if(v3 > v1 && v3 > v2 && v1 < v2){
							printf("Maior: %.2f.\n", v3);
							printf("Médio: %.2f.\n", v2);
							printf("Menor: %.2f.\n", v1);
						} else{
							printf("Valores iguais detectados!.\nTente novamente com valores diferentes!.\n");
						}
					}
				}
			}
		}
	}
	
	system("pause");
}
