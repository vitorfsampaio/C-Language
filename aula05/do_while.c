#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	int rep = 1;
	
	printf("Insira quantas repeti��es quer:\n");
	scanf("%d", &contador);
	
	do{	
		printf("Tentativa %d.\n", rep);
		rep++;
	}while(rep <= contador);
}
