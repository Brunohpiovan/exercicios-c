#include <stdio.h>


int main(int argc, char** argv)
{
	
	int x,IDD,MAIOR=0;

	for(x=1;x<=10;x++){
		printf("Informe sua idade: ");
		scanf("%d",&IDD);
		if(IDD>=18){
			MAIOR++;
		}
	}
	printf("A quantidade de pessoas maiores de 18 anos e de %d.",MAIOR);
	
	
	return 0;
}