#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float preco, lucro, imp, perc, total_imp, total;
	
	printf("Insira o preço de fábrica:\n");
	scanf("%f", &preco);
	printf("Insira a porcentagem de lucro do distribuidor:\n");
	scanf("%f", &lucro);
	printf("Insira a porcentagem de impostos:\n");
	scanf("%f", &imp);
	system("cls");
	
	perc = lucro/100;
	total_imp = imp/100;
	
	total = (perc + total_imp) * preco + preco;
	perc = perc*preco;
	total_imp = total_imp*preco;
	
	printf("Lucro do distribuidor: R$%.2f.\n", perc);
	printf("Impostos: R$%.2f.\n", total_imp);
	printf("Valor final: R$%.2f.\n", total);
}
