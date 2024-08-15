#include <stdio.h>


int lernum(){
	int numero;
	printf("Informe o numero: ");
	scanf("%d",&numero);
	return numero;
}
int imparpar(int numero){
	if(numero%2==0){
		return 1;
	}else if(numero%2!=0){
		return 0;
	}else if(numero==0){
		return 2;
	}
}
int main(int argc, char** argv)
{
	int N;
	N=lernum();
	imparpar(N);
	if(imparpar(N)==1){
		printf("VALOR PAR.");
	}else if(imparpar(N)==0){
		printf("VALOR IMPAR.");
	}else if(imparpar(N)==2){
		printf("ZERO.");
	}
	return 0;
}