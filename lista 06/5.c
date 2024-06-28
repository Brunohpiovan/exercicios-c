#include <stdio.h>


int main()
{
	
	int S,SC;
	
	printf("digite uma senha numerica: ");
	scanf("%d",&S);
	printf("confirme sua senha: ");
	scanf("%d",&SC);
	if (S==SC){
		printf("senha criada com sucesso!!");
	}else{
		printf("senha nao confere.");
	}
	
	
	
	return 0;
}