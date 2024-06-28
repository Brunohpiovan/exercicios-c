#include <stdio.h>



int main(int argc, char** argv)
{
	
	int E;
	
	do{
		printf("1-Dizer 'Oi'\n");
		printf("2-Dizer 'Ola'\n");
		printf("0-SAIR\n");
		scanf("%d",&E);
		if(E==1){
			printf("Oi\n");
		}else if(E==2){
			printf("Ola\n");
		}
	}while (E!=0);
	
	printf("ENCERRADO.");
	
	
	return 0;
}