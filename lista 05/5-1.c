#include <stdio.h>

int main(int argc, char** argv)
{
	float BA,BT;
	int IDADE;
	
	
	BA=365.25*24*60*60;
	printf("informe sua idade em anos: ");
	scanf("%d",&IDADE);
	BT=BA*IDADE;
	printf("se coraCao ja bateu %.1f %s",BT,"vezes durante toda a sua vida");
	
	return 0;
}