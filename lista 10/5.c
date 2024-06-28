#include <stdio.h>


int main(int argc, char** argv)
{
	
	int IDD,A;
	char G;
	
	printf("Qual o seu genero?(M/F)");
	scanf("%c",&G);
	printf("Qual a sua idade? ");
	scanf("%d",&IDD);
	printf("Quantos anos voce tem de contribuicao? ");
	scanf("%d",&A);
	
	if(G=='M' && IDD>= 65 && A>=30){
		printf("Voce pode se aposentar");
	}else if(G=='F' && IDD>= 60 && A>=25){
		printf("Voce pode se aposentar");
		
	}else
	{
		printf("Voce nao pode se aposentar ainda.");
	}
	
	
	
	return 0;
}