/*
entrada:idade,ano de nascimento
processamento:
saida:Você tem IDADE anos e nasceu em AN!
 
*/
#include <stdio.h>


int main()
{	
	int IDADE,AN;
	
	printf("qual a sua idade? ");
	scanf("%i",&IDADE);
	printf("Em qual ano vc nasceu? ");
	scanf("%i",&AN);
	printf("Voce tem %i %s",IDADE,"anos e nasceu em ");
	printf("%i%s",AN,"!");
	
	return 0;
}