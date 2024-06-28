#include <stdio.h>


int main(int argc, char** argv)
{
	
	int i,N[6];
		
	for(i=0;i<6;i++){
		printf("Informe o valor inteiro: ");
		scanf("%d",&N[i]);
	}
	for(i=0;i<6;i++){
		printf("%d ",N[i]);
	}
	
	return 0;
}