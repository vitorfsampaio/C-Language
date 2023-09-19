#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char S1[N] = {"Lógica de"};
	char S2[N] = {" Programação"};
	
	printf("Antes do strcat:\n");
	printf("string 1: %s\n", S1);
	printf("string 2: %s\n", S2);
	
	strcat(S1, S2);
	
	printf("Depois do strcat:\n");
	printf("string 1: %s\n", S1);
}
