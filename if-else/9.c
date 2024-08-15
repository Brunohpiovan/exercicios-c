#include <stdio.h>



int main(int argc, char** argv)
{
	
	int TOTAL,DEFEITO;
	float L;
	
	printf("qual foi o numero total de parafusos produzidos?");
	scanf("%d",&TOTAL);
	printf("Qual foi o numero de parafusos com defeito? ");
	scanf("%d",&DEFEITO);
	L=TOTAL*10/100;
	if(DEFEITO>L){
		printf("A producao esta ruim.");
	}else
	{
		printf("A producao esta boa!");
	}
	
	return 0;
}