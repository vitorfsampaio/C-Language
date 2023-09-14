#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 0 1 1 2 3 5 8 13
//     a
//   n1
//n2

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, i;
	int n1 = 1;
	int n2 = 0;
	
	printf("Série de Fibonacci:\n");
	
	for(i = 3;i <= 8; i++){
		a = n1 + n2;
		printf("%d ", a);
		n2 = n1;
		n1 = a;
	}
	
	printf("\n");
	
	system("pause");
}
