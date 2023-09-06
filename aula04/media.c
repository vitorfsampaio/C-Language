#include <stdio.h>

int main(){
	float m;
	
	printf("Insira a nota do estudante:\n");
	scanf("%f", &m);
	
	if(m >= 7){
		printf("ALUNO APROVADO!");
	} else {
		printf("ALUNO REPROVADO!");
	}
}
