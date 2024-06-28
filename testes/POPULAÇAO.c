#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	double A=5000000,B=7000000;
	int ANOS=0;
	
	while(A<B){
		A+=A*3/100;
		B+=B*2/100;
		ANOS++;
	}
	printf("Em %d anos o pais A ultrapassara o pais B.",ANOS);
	
	
	return 0;
}