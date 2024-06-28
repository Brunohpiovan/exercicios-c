#include <stdio.h>

int main()
{
	int SENHA;
	
	printf("informe a senha numerica: ");
	scanf("%d",&SENHA);
	if (SENHA != 123456){
		printf("senha incorreta!");
	}
	
	
	return 0;
}