#include <stdio.h>



int main(int argc, char** argv)
{
	
	int E1,E2;
	float TEMP,R,DIS;
	
	
	printf("MENU\n");
	printf("1-Conversao de temperatura\n");
	printf("2-Conversao de distAncia\n");
	scanf("%d",&E1);
	if(E1==1){
		printf("MENU\n");
		printf("1-Converter Celsius para Farenheit\n");
		printf("2-Converter Farenheit para Celsius\n");
		printf("3-Converter Celsius para Kelvin\n");
		scanf("%d",&E2);
		if(E2==1){
			printf("Informe a temperatura em celsius:");
			scanf("%f",&TEMP);
			R = (9*TEMP/5) + 32;
			printf("%f FARENHEIT",R);
		}else if(E2==2){
			printf("Informe a temperatura em Farenheit:");
			scanf("%f",&TEMP);
			R = 5*(TEMP-32)/9;
			printf("%f CELSIUS",R);
		}else if(E2==3){
			printf("Informe a temperatura em celsius:");
			scanf("%f",&TEMP);
			R = TEMP + 273;
			printf("%f KELVIN",R);
		}
	}else if(E1==2){
		printf("MENU\n");
		printf("1-Converter km para milhas\n");
		printf("2-Converter milhas para km\n");
		scanf("%d",&E2);
		if(E2==1){
			printf("Ïnforme a distancia em km");
			scanf("%f",&DIS);
			R = DIS * 0.62137;
			printf("%f MILHAS",R);
		}else if(E2==2){
			printf("Ïnforme a distancia em milhas");
			scanf("%f",&DIS);
			R = DIS / 0.62137;
			printf("%f KM",R);
		}
	}
	
	
	return 0;
}