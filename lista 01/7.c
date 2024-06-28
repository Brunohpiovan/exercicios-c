/*
entrada:ano de nascimento
processamento:idade = 2024 - ANON;
saida:"a sua provavel idade e de: %d %s",idade,"anos"

*/
#include <stdio.h>

int main()
{	
	int ANON,idade;
	
	
	
	printf("em que ano voce nasceu? ");
	scanf("%d",&ANON);
	idade = 2024 - ANON;
	printf("a sua provavel idade e de: %d %s",idade,"anos");	
	
	
	return 0;
}