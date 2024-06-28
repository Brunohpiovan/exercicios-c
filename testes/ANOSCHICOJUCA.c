#include <stdio.h>


int main(int argc, char** argv)
{
	
	float C=1.7,J=1.1;
	int ANOS=0;
	
		
	while(C>J){
		C+=0.02;
		J+=0.03;
		ANOS++;
	}
	printf("Em %d anos Juca ficara maior que Chico",ANOS);
	
	return 0;
}