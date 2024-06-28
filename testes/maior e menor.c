#include <stdio.h>
#include <limits.h>


int main(int argc, char** argv)
{
	
	
	int x=1,SOMA=0,MAIOR=INT_MIN,MENOR=INT_MAX,N;
	float MEDIA;
	
	do{
		printf("informe um valor inteiro:");
		scanf("%d",&N);
		if(N>=MAIOR){
			MAIOR=N;
		}
		 if(N<=MENOR){
			MENOR=N;
		}
		SOMA+=N;
		x++;
	}while(x<=5);
	MEDIA=(float)SOMA/5;
	printf("O maior numero lido e %d\n",MAIOR);
	printf("O menor numero lido e %d\n",MENOR);
	printf("A media de todos numeros e %.2f\n",MEDIA);
	
	
	
	
	return 0;
}