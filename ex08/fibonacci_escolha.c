#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 0 1 1 2 3 5 8 13
//     a
//   n1
//n2

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	int a, i;
	int n1 = 1;
	int n2 = 0;
	
	printf("Qual termo da sequência você quer saber?\n");
	scanf("%d", &opc);
	
	if(opc > 47){
		printf("Número alto demais pae\n");
	} else{
		printf("%d ", n2);
	
		for(i = 2;i <= opc; i++){
			a = n1 + n2;
			printf("%d ", a);
			n2 = n1;
			n1 = a;
		}
	
	}
	
	printf("\n");

	system("pause");
}
