#include <stdio.h>

int main()
{
	float salario;
	
	printf("informe seu salario(R$): ");
	scanf("%f",&salario);
	if (salario>=18000){
		printf("Voce e classe A.");
	}else if(salario>=9000){
		printf("Voce e classe B.");
	}else{
		printf("Voce e classe C ou menor.");
	}
	return 0;
}