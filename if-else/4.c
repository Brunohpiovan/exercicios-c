#include <stdio.h>


int main(int argc, char** argv)
{
	
	int SENHA;
	
	printf("Informe a senha numerica:");
	scanf("%d",&SENHA);
	if(SENHA != 1234){
		printf("A senha esta incorreta!Tente novamente.");
	}else
	{
		printf("A senha esta correta!Acesso autorizado.");
	}
	
	return 0;
}