#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma, i;
	
	soma = 0;
	i = 0;
	
	do{
		soma = soma + i;
		i = i + 1;		
	}while(i <= 10);
	
	printf("Somatório: %d", soma);
}
	
