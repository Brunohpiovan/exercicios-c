#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(int argc, char** argv)
{
	
	char NAC[20],RG[20];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Voce é (brasileiro) ou (estrangeiro)? ");
	gets(NAC);
	if (strcmp(NAC,"estrangeiro")==00){
		printf("seja bem-vindo ao Brasil!");
	}else if(strcmp(NAC,"brasileiro")==0){
		printf("Em qual região você nasceu? ");
		gets(RG);
		if(strcmp(RG,"sul")==0){
			printf("você é está acostumado com frio.");
		}else if(strcmp(RG,"sudeste")==0){
			printf("você está acostumado com chuva.");
		}else if(strcmp(RG,"centro-oeste")==0){
			printf("você está acostumado com clima abafado.");
		}else if(strcmp(RG,"nordeste")==0){
			printf("você está acostumado com praias bonitas.");
		}else if(strcmp(RG,"norte")==0){
			printf("você está acostumado com chuvas no começo da tarde.");
		}else
		{
			printf("Região não registrada.");
		}
	}else
	{
		printf("Erro.");
	}
	
	
	return 0;
}