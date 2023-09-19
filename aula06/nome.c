#include <stdio.h>

int main(){
	char s[30];
	
	printf("Digite seu nome:\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
	
	printf("Digite seu nome:\n");
	scanf("%30[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
}
