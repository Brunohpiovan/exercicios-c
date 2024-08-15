#include <stdio.h>
#include <string.h>



int main(int argc, char** argv)
{
	
	
	char USER[20];
	int SN;
	
	printf("Usuario: ");
	gets(USER);
	printf("Senha: ");
	scanf("%d",&SN);
	
	if(strcmp(USER,"chefe")==0 && SN == 1234){
		printf("Acesso concluido!");
	}else
	{
		printf("Senha/ou usuario incorreto.");
	}
	return 0;
}