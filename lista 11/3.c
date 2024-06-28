#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(int argc, char** argv)
{
	
	char NAC[20],RG[20];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Voce é (brasileiro) ou (estrangeiro)? ");
	gets(NAC);
	if(strcmp(NAC,"brasileiro")==0||strcmp(NAC,"Brasileiro")==0){
		printf("Em qual região você nasceu? ");
		gets(RG);
		if(strcmp(RG,"sul")==0||strcmp(RG,"Sul")==0){
			printf("você está acostumado com frio.");
		}else if(strcmp(RG,"sudeste")==0||strcmp(RG,"Sudeste")==0){
			printf("você está acostumado com chuva.");
		}else if(strcmp(RG,"centro-oeste")==0||strcmp(RG,"Centro-Oeste")==0){
			printf("você está acostumado com clima abafado.");
		}else if(strcmp(RG,"nordeste")==0||strcmp(RG,"Nordeste")==0){
			printf("você está acostumado com praias bonitas.");
		}else if(strcmp(RG,"norte")==0||strcmp(RG,"Norte")==0){
			printf("você está acostumado com chuvas no começo da tarde.");
		}else
		{
			printf("Região não registrada.");
		}
	}else if(strcmp(NAC,"estrangeiro")==0||strcmp(NAC,"Estrangeiro")==0)
	{
		printf("seja bem-vindo ao Brasil!");
	}else
	{
		printf("ERRO");
	}
	
	
	return 0;
}