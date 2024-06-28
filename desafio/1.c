#include <stdio.h>


int main(int argc, char** argv)
{
	
	int SEXO,OLHOS,CABELO,IDD,MAIORI=0,MULHERJC=0,IDADEM=0,HABITANTESM=0,HOMEMAD=0,PESSAZ=0;
	char E;
	float PMJ,MIM;
	
	
	
	do{
		printf("sexo (1-M ou 2- F)");
		scanf("%d",&SEXO);
		printf("cor dos olhos = 1 (azuis), 2 (verdes), 3 (castanhos)");
		scanf("%d",&OLHOS);
		printf("cor dos cabelos = 1 (loiros), 2 (castanhos), 3 (pretos)");
		scanf("%d",&CABELO);
		printf("idade em anos:");
		scanf("%d",&IDD);
		printf("deseja continuar a pesquisa?(s/n)");
		scanf(" %c",&E);
		if(IDD>MAIORI){
			MAIORI=IDD;
		}
		if(SEXO == 2 && IDD>=18 && IDD<=35 && CABELO==2){
			MULHERJC++;
		}
		if(SEXO==2){
			IDADEM+=IDD;
			HABITANTESM++;
		}
		if(SEXO==1 && IDD>21){
			HOMEMAD++;
		}
		if(OLHOS==1){
			PESSAZ++;
		}
		
		
	}while(E=='s'||E=='S');
	PMJ=(float)MULHERJC/HABITANTESM*100;
	MIM=(float)IDADEM/HABITANTESM;
	printf("A maior idade entre todos habitantes e %d anos\n",MAIORI);
	printf("A porcentagem de mulheres entre 18 e 35 anos com cabelos castanhos:%.2f\n",PMJ);
	printf("A media de idade de todas mulheres e de %.1f anos\n",MIM);
	printf("%d homens sao maiores que 21 anos\n",HOMEMAD);
	printf("%d pessoas tem os olhos azuis\n",PESSAZ);
	
	
	
	
	return 0;
}