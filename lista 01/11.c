/*
entrada:dois valores
processamento:x=a;
	a=b;
	b=x;
saida:a e b
 
*/
#include <stdio.h>

int main()
{	
	int a,b,x;
	
	printf("digite um valor para a: ");
	scanf("%d",&a);
	printf("digite um valor para b: ");
	scanf("%d",&b);
	x=a;
	a=b;
	b=x;
	printf("os valores de a e b respectivamente e %d %s %d",a,"e",b);
	
	
	
	return 0;
}