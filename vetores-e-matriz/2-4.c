#include <stdio.h>
#define TAM 100

int main(int argc, char** argv)
{
	
	int N[TAM];
	int X;
	
	for(X=0;X<TAM;X++){
		if(X%2==0){
			N[X]=1;
		}else
		{
			N[X]=0;
		}
	}
	for(X=0;X<TAM;X++){
		printf("%d ",N[X]);
	}
	
	return 0;
}