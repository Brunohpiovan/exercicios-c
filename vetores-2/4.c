#include <stdio.h>
#define TAM 5



int main(int argc, char** argv)
{
	int V1[TAM]={2,4,6,8,10},V2[TAM]={1,3,5,7,9};
	int X,R;
	
	
	for(X=0;X<TAM;X++){
		printf("V1 Posicao %d:%d\n",X,V1[X]);
		printf("V2 Posicao %d:%d\n",X,V2[X]);
		R=V1[X]+V2[X];
		printf("A soma de V1 e V2 nas posicoes %d,e igual a %d\n\n",X,R);
	}
	
	return 0;
}