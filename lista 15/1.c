#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
	
	
	char ALF[15];
	char X;
	
	printf("voce deseja ver o alfabeto em letra maiuscula ou minuscula?");
	gets(ALF);
	if(strcmp(ALF,"maiuscula")==0 ||strcmp(ALF,"Maiuscula")==0 ||strcmp(ALF,"MAIUSCULA")==0 ){
		for(X='A';X<='Z';X++){
			printf("%c ",X);
		}
	}else if(strcmp(ALF,"minuscula")==0 ||strcmp(ALF,"Minuscula")==0 ||strcmp(ALF,"MINUSCULA")==0 ){
		for(X='a';X<='z';X++){
			printf("%c ",X);
		}
	}
	
	return 0;
}