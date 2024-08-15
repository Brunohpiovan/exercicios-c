#include <stdio.h>

int lernumero(){
	int numero;
	printf("Informe um numero: ");
	scanf("%d",&numero);
	return numero;
}
float decisao(int N){
	int flag;
	if(N%2==0){
		flag=0;
	}else
	{
		flag=1;
	}
	return flag;
}
void apresentar(int flag){
	if(flag==0){
		printf("O numero e par.");
	}else
	{
		printf("O numero e impar.");
	}
}


int main(int argc, char** argv)
{
	int N,R;
		
	N=lernumero();
	R=decisao(N);
	apresentar(R);
	
	return 0;
}