#include <stdio.h>
#include <stdlib.h>

int main(){
	int dec, n1, n2, res;
	
	printf("Digite 1 para somar\n");
	printf("Digite 2 para subtrair\n");
	printf("Digite 3 para multiplicar\n");
	printf("Digite 4 para dividir\n");
	scanf("%d", &dec);
	
	switch(dec){
			printf("Digite o primeiro valor a ser somado:\n");
			scanf("%d", &n1);
			printf("Digite o segundo valor a ser somado:\n");
			scanf("%d", &n2);
			
			res = n1 + n2;
			printf("Resultado: %d.\n", res);
		break;
		case 2:
			printf("Digite o primeiro valor a ser subtraido:\n");
			scanf("%d", &n1);
			printf("Digite o segundo valor a ser subtraido:\n");
			scanf("%d", &n2);
			
			res = n1 - n2;
			printf("Resultado: %d.\n", res);
		break;
		case 3:
			printf("Digite o primeiro valor a ser multiplicado:\n");
			scanf("%d", &n1);
			printf("Digite o segundo valor a ser multiplicado:\n");
			scanf("%d", &n2);
			
			res = n1 * n2;
			printf("Resultado: %d.\n", res);
		break;
		case 4:
			printf("Digite o primeiro valor a ser dividido:\n");
			scanf("%d", &n1);
			printf("Digite o segundo valor a ser dividido:\n");
			scanf("%d", &n2);
			
			if (n2 == 0 || n1 == 0){
				printf("Divisão por zero!\n");
			} else{
				res = n1 / n2;
				printf("Resultado: %d.\n", res);	
			}
		break;		
		default:
			printf("Valor indisponivel\n");
		break;	
	}
	system("pause");
}
