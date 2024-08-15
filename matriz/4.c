#include <stdio.h>
#define TAML 2
#define TAMC 3

int main(int argc, char** argv)
{
	
	int MAT[TAML][TAMC];
	int L,C,SOMAL=0,SOMAL2=0;
	
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("Informe um numero para a linha %d e coluna %d: ",L,C);
			scanf("%d",&MAT[L][C]);
			if(L==0){
				SOMAL+=MAT[L][C];
			}else
			{
				SOMAL2+=MAT[L][C];   	
			}
 	   	}
	}
	printf("\nMATRIZ:\n");
	for(L=0;L<TAML;L++){
		for(C=0;C<TAMC;C++){
			printf("%d ",MAT[L][C]);
 	   	}
 	   	printf("\n");
	}
		printf("A soma da linha 0 e igual a %d\n",SOMAL);
		printf("A soma da linha 1 e igual a %d\n",SOMAL2);
	
	return 0;
}