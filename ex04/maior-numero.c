#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%d", &n1);
	printf("Insira o segundo n�mero:\n");
	scanf("%d", &n2);
	
	if (n1 > n2){
		printf("O maior: %d.\n", n1);
	} else if(n1 < n2){
		printf("O maior: %d.\n", n2);
	} else{
		printf("Os n�meros s�o iguais!");
	}
	
	system("pause");
}
