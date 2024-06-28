#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
	

	char LETRA[15],x;
	int E;
		
	do{
		fflush(stdin);
		printf("\nVoce deseja o alfabeto em letra maiscula ou minuscula?");
		gets(LETRA);
		if(strcmp(LETRA,"Maiuscula")==0 || strcmp(LETRA,"maiuscula")==0 ||
			 strcmp(LETRA,"MAIUSCULA")==0 ){
			for(x='A';x<='Z';x++){
				printf("%c ",x);
			}
		}else if(strcmp(LETRA,"Minuscula")==0 || strcmp(LETRA,"minuscula")==0 ||
			 	   strcmp(LETRA,"MINUSCULA")==0 ){
			for(x='a';x<='z';x++){
				printf("%c ",x);
			}
		}
		printf("\nvoce seja utilizar o programa novamente?");
		printf("\n(1)SIM");
		printf("\n(0)NAO\n");
		scanf("%d",&E);
	}while(E!=0);
	return 0;
}