#include <stdio.h>


int main(int argc, char** argv)
{
	
	int X;
	float C,F;
	
	F=50;
	for(X=50;X<=150;X++){
		C=(5.0/9.0)*(F-32);
		printf("%.2f C\n",C);
		F++;
		
	}
	
	return 0;
}