#include <stdio.h>

 int main(){
 	float sal, perc, aumento, novo_sal;
 	
 	printf("Insira o salario atual em R$:\n");
 	scanf("%f", &sal);
 	printf("Quantos porcento deseja aumentar?\n");
 	scanf("%f", &perc);
 	
 	aumento = sal*perc/100;
 	
 	novo_sal = aumento + sal;
 	
 	printf("Valor acrescido: %.3f.\n", aumento);
 	printf("Salario novo: %.3f.\n",novo_sal);
 	
 	system("pause");
 }
