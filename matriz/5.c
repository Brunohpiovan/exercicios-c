#include <stdio.h>
#define TAML 3
#define TAMC 3

int main(int argc, char** argv)
{
	
	int MAT1[TAML][TAMC],MAT2[TAML][TAMC],MATR[TAML][TAMC];
	int L,C;
	
	printf("Atribuindo numeros a MATRIZ 1:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("Informe um numero para a linha %d e coluna %d: ",L,C);
			scanf("%d",&MAT1[L][C]);
 	   	}
	}
	printf("\nAtribuindo numeros a MATRIZ 2:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("Informe um numero para a linha %d e coluna %d: ",L,C);
			scanf("%d",&MAT2[L][C]);
 	   	}
	}
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			MATR[L][C]=MAT1[L][C]*MAT2[L][C];
 	   	}
	}
	printf("\nMATRIZ 1:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("%d ",MAT1[L][C]);
 	   	}
 	   	printf("\n");
	}
	printf("\nMATRIZ 2:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("%d ",MAT2[L][C]);
 	   	}
 	   	printf("\n");
	}
	printf("\nMultiplicacao das matrizes:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("%d ",MATR[L][C]);
 	   	}
 	   	printf("\n");
	}
	return 0;
}