#include <stdio.h>

int main()
{
	int IDD;
	
	printf("informe sua idade: ");
	scanf("%d",&IDD);
	if (IDD>=5 && IDD <=7){
		printf("categoria:INFANTIL A.");
	}else if(IDD>=8 && IDD<=10){
		printf("categoria:INFANTIL B");
	}else if(IDD>=11 && IDD<=13){
		printf("categoria:JUVENIL A");
	}else if(IDD>=14 && IDD<=17){
		printf("categoria:JUVENIL B");
	}else if(IDD>=18){
		printf("categoria:SENIOR");
	}else{
		printf("SEM CATEGORIA.");
	}
	return 0;
}