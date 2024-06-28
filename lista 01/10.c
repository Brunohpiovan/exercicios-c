/*
entrada:temperatura em f
processamento:C=5*(F-32)/9;
saida:"a temperatuda convertida em graus celsius e %.2f %s",C,"C"

*/
#include <stdio.h>

int main()
{	
	float C,F;
	
	printf("qual a temperatura em farenheits? ");
	scanf("%f",&F);
	C=5*(F-32)/9;
	printf("a temperatuda convertida em graus celsius e %.2f %s",C,"C");
	
	
	return 0;
}