#include <stdio.h>

int main(){
	char s[40];
	
	printf("Digite seu nome (fgets):\n");
	fgets(s, 40 ,stdin);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
	
	printf("Digite seu nome (scanf aprimorado):\n");
	scanf("%40[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
}
