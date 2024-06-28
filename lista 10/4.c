#include <stdio.h>
#include <string.h>
#include <locale.h>


int main()
{
	
	char user[20];
	int SN;

	setlocale(LC_ALL,"Portuguese");
	printf("Informe o usuario:");
	gets(user);
	printf("Digite a senha: ");
	scanf("%d",&SN);
	
	if(strcmp(user,"chefe") == 0 && SN==123456){
		printf("Login realizado");
	}else if(strcmp(user,"Chefe") == 0 && SN==123456){
		printf("Login realizado");
	}
	else
	{
		printf("usuário e/ou senha incorretos");
	}
	
	return 0;
}