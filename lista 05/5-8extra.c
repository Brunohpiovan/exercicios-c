#include <stdio.h>

int main()
{	
	int IDD,R,D,M,ANOS;
	
	
	printf("informe sua idade em dias: ");
	scanf("%d",&IDD);
	ANOS=IDD/365;
	R=IDD%365;
	M=R/30;
	D=R%30;
	printf("a sua idade e %d anos,",ANOS);
	printf("%d meses,",M);
	printf("%d dias.",D);
	
	
	return 0;
}