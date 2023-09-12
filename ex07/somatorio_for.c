#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma, i;
	
	soma = 0;
	
	for(i=1;i<=10;i++){
		soma = soma + i;
	}
	
	printf("Somatório: %d.\n", soma);
	
	system("pause");
}
