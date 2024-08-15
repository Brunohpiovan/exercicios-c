#include <stdio.h>
#define TAML 3
#define TAMC 2

int main(int argc, char** argv)
{
	
	int MAT[TAML][TAMC];
	int L,C;
	
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("Informe um numero para a linha %d e coluna %d: ",L,C);
			scanf("%d",&MAT[L][C]);
 	   	}
	}
	printf("\nMATRIZ:\n");
	for(L=0;L<TAMC;L++){
		for(C=0;C<TAML;C++){
			printf("%d ",MAT[C][L]);
 	   	}
 	   	printf("\n");
	}
	return 0;
}