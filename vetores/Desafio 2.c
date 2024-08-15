#include <stdio.h>
#define TAM 5

int main(int argc, char** argv)
{
	
	int X,Y,Z,AUX;
	int N[TAM];
	
	for(X=0;X<TAM;X++){
		printf("Informe N%d:",X+1);
		scanf("%d",&N[X]);
	}
	for(Y=0;Y<TAM;Y++){
		for(Z=Y;Z<TAM;Z++){
			if(N[Y]>N[Z]){
				AUX=N[Y];
				N[Y]=N[Z];
				N[Z]=AUX;
			}
		}
	}
	for(X=0;X<TAM;X++){
		printf("%d ",N[X]);
	}
	
	return 0;
}