#include <stdio.h>


int lernum(){
	int num;
	printf("Informe um numero: ");
	scanf("%d",&num);
	return num;
}
int maiormenor(int N1,int N2){
	int flag;
	if(N1>N2){
		flag=0;
	}else if(N1<N2){
		flag=1;
	}else
	{
		flag=2;
	}
	return flag;
}
void apresentar(int flag,int N1,int N2){
	if(flag==0){
		printf("%d e maior que %d.",N1,N2);
	}else if(flag==1){
		printf("%d e maior que %d.",N2,N1);
	}else if(flag==2){
		printf("%d e igual a %d.",N1,N2);
	}
}


int main(int argc, char** argv)
{
	int N1,N2,R;
	
	N1=lernum();
	N2=lernum();
	R=maiormenor(N1,N2);
	apresentar(R,N1,N2);
	return 0;
}