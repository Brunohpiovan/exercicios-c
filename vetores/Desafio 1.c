#include <stdio.h>
#include <math.h>
#define TAM 5

int main(int argc, char** argv)
{
	
	int X,SOMA=0;
	int N[TAM];
	float MEDIA,MAISPROX,MENORDIS,DISTANCIA;
	
	for(X=0;X<TAM;X++){
		printf("Informe um numero %d: ",X+1);
		scanf("%d",&N[X]);
	}
	for(X=0;X<TAM;X++){
		SOMA+=N[X];
	}
	MEDIA=(float)SOMA/5;
	MAISPROX=N[0];
	MENORDIS=fabsf(N[0]-MEDIA);
	
	for(X=0;X<TAM;X++){
		DISTANCIA=fabsf(N[X]-MEDIA);
		if(DISTANCIA<MENORDIS){
			MENORDIS=DISTANCIA;
			MAISPROX=N[X];
		}
	}
	printf("A media foi %f\n",MEDIA);
	printf("O numero mais proximo da media digitado,foi %f",MAISPROX);
	return 0;
}