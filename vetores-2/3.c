#include <stdio.h>

int main(int argc, char** argv)
{
	
	int N[10];
	int X,NUM=2;
	

	for(X=0;X<10;X++){
		N[X]=NUM;
		NUM+=2;
	}
	for(X=0;X<10;X++){
		printf("Posicao %d:%d\n",X,N[X]);
	}
	return 0;
}
