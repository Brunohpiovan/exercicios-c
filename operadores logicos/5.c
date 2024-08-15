#include <stdio.h>


int main(int argc, char** argv)
{
	
	char GEN;
	int IDD,CONTR;
	
	
	printf("Informe seu genero M/F: ");
	scanf("%c",&GEN);
	printf("Informe sua idade: ");
	scanf("%d",&IDD);
	printf("Quantos anos voce tem de contribuicao? ");
	scanf("%d",&CONTR);
	
	if(GEN=='M' && IDD>=65 && CONTR>=30){
		printf("Voce pode se aposentar.");
	}else if(GEN=='F' && IDD>=60 && CONTR>=25){
		printf("Voce pode se aposentar.");
	}else
	{
		printf("Voce nao pode se aposentar.");
	}
	
	return 0;
}