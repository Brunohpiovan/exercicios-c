#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	int x,N,MAIOR=0,MENOR,SOMA=0;
	float MEDIA;
	
	for(x=1;x<=5;x++){
		printf("Informe um valor inteiro: ");
		scanf("%d",&N);
		if(N>=MAIOR){
			MAIOR=N;
		}
		if(N<=MENOR){
			MENOR=N;
		}
		SOMA+=N;
	}
	MEDIA=(float)SOMA/5;
	printf("O maior numero digitado e %d\n",MAIOR);
	printf("O menor numero digitado e %d\n",MENOR);
	printf("A media de todos numeros digitados e %f\n",MEDIA);
	return 0;
}