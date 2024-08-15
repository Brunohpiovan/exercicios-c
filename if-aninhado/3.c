#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
	
	
	char NAC[20],REG[20];
	
	printf("Voce e brasileiro ou estrangeiro? ");
	gets(NAC);
	if(strcmp(NAC,"Brasileiro")==0 || strcmp(NAC,"brasileiro")==0 ||strcmp(NAC,"BRASILEIRO")==0){
		printf("Em qual regiao voce nasceu? ");
		gets(REG);
		if(strcmp(REG,"sul")==0 || strcmp(REG,"SUL")==0 || strcmp (REG,"Sul")==0){
			printf("voce esta acostumado com frio.");
		}else if(strcmp(REG,"suldeste")==0 || strcmp(REG,"SULDESTE")==0 || strcmp (REG,"Suldeste")==0){
			printf("voce esta acostumadocom chuva.");
		}else if(strcmp(REG,"centro-oeste")==0 || strcmp(REG,"CENTRO-OESTE")==0 || strcmp (REG,"Centro-oeste")==0){
			printf("voce esta acostumado com clima abafado.");
		}else if(strcmp(REG,"norte")==0 || strcmp(REG,"NORTE")==0 || strcmp (REG,"Norte")==0){
			printf("voce esta acostumado com praias bonitas.");
		}else if(strcmp(REG,"nordeste")==0 || strcmp(REG,"NORDESTE")==0 || strcmp (REG,"Nordeste")==0){
			printf("voce esta acostumado com chuvas no começo da tarde.");
		}
	}else if(strcmp(NAC,"Estrangeiro")==0 || strcmp(NAC,"estrangeiro")==0 ||strcmp(NAC,"ESTRANGEIRO")){
		printf("seja bem-vindo ao Brasil!!");
	}
	return 0;
}