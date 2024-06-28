#include <stdio.h>

int main()
{	
	int P,PD;
	float L;	
	
	printf("qual o numero total de parafusos produzidos? ");
	scanf("%d",&P);
	printf("qual o numero total de parafusos com defeito? ");
	scanf("%d",&PD);
	L=P*10/100;
	if(PD<=L){
		printf("A producao estao boa!");
	}else{
		printf("A producao esta ruim.");
	}   
	   
	   	
	return 0;
}