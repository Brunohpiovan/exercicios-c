#include <stdio.h>

int main()
{
	float SALARIO;
	
	printf("informe seu salario: ");
	scanf("%f",&SALARIO);
	if(SALARIO<1045){
		printf("voce ganha menos que um salario minimo.");
	}else{
		printf("voce ganha pelo menos um salario minimo!");
	}
	
	
	
	
	return 0;
}