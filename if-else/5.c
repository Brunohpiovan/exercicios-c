#include <stdio.h>


int main(int argc, char** argv)
{
	
	int SN,SNC;
	
	printf("Informe a senha: ");
	scanf("%d",&SN);
	printf("Confirme a senha: ");
	scanf("%d",&SNC);
	if(SN==SNC){
		printf("senha criada com sucesso!!");
	}else
	{
		printf("A senha nao confere.");
	}
	
	return 0;
}