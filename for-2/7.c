#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	int x,N,NM,NN;
	float ALT,ALTM,ALTN;
	
	for(x=1;x<=4;x++){
		printf("Informe seu numero: ");
		scanf("%d",&N);
		printf("Informe sua altura: ");
		scanf("%f",&ALT);
		if(x==1){
			ALTM=ALT;
			ALTN=ALT;
			NM=N;
			NN=N;
		}else if(ALT>ALTM){
			ALTM=ALT;
			NM=N;
		}else if(ALT<ALTN){
			ALTN=ALT;
			NN=N;
		}
		
	}
	printf("O maior aluno e o numero %d com a altura de %.1f cm\n",NM,ALTM);
	printf("O menor aluno e o numero %d com a altura de %.1f cm",NN,ALTN);
	return 0;
}