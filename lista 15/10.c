#include <stdio.h>



int main(int argc, char** argv)
{
	
	int SOMA,E,X,P,ET;
	
	SOMA=0;
	E=1;
	for(X=1;X<=13;X++){
		for(P=1;P<=2;P++){
			SOMA=SOMA+ET;
			E=E*2;
			ET=E;
		}
	}
	printf("No programa final ele cometera %d erros",SOMA);
	
	return 0;
}