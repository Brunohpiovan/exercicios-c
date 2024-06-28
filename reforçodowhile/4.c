#include <stdio.h>


int main(int argc, char** argv)
{
	
	int V,F=0,C=0;
	char E;
	
	
	do{
		printf("1 - FULANO\n");
		printf("2 - CICRANO\n");
		scanf("%d",&V);
		if(V==1){
			F++;
		}else if(V==2){
			C++;
		}
		printf("Deseja continuar a votacao?(s/n)");
		scanf(" %c",&E);
	}while(E=='s'||E=='S');
		if(F>C){
			printf("Fulano venceu a votacao!\n");
			printf("Fulano - %d VOTOS\n",F);
			printf("Cicrano - %d VOTOS\n",C);
			
		}else if(C>F){
			printf("Cicrano venceu a votacao!\n");
			printf("Cicrano - %d VOTOS\n",C);
			printf("Fulano - %d VOTOS\n",F);
			
		}else if(C==F){
			printf("A votacao empatou!\n");
			printf("Cicrano - %d VOTOS\n",C);
			printf("Fulano - %d VOTOS\n",F);
			
		}
	
	
	return 0;
}