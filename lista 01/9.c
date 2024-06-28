/*
entrada:temperatura em celsius
processamento:F=(9*C/5)+32;
saida:"a temperatura convertida em farenheits e %.2f%s",F,"F"

*/
#include <stdio.h>

int main()
{	
	float C,F;
	
	printf("qual a temperatura em graus celsius? ");
	scanf("%f",&C);
	F=(9*C/5)+32;
	printf("a temperatura convertida em farenheits e %.2f%s",F,"F");
		
	
	
	return 0;
}