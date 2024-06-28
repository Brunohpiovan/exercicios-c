#include <stdio.h>

int main()
{	
	int v;
	
	printf("informe um valor inteiro: ");
	scanf("%d",&v);
	if (v>0){
		printf("Valor positivo.");
	}else if(v<0){
		printf("Valor negativo.");
	}else{
		printf("Valor nulo");
	}
		
	
	return 0;
}