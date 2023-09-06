#include <stdio.h>

int main(){
	float m;
	
	printf("Insira a média do estudante:\n");
	scanf("%f", &m);
	
	if (m >= 4.0 && m < 7.0){
		printf("Pode fazer recuperação\n");
	}
}
