#include <stdio.h>

int main(int argc, char** argv)
{
	
	float N1,N2,N3,MA,SOMA,MT;
	int x;
	
	for(x=1;x<=3;x++){
		printf("Informe sua nota 1: ");
		scanf("%f",&N1);
		printf("Informe sua nota 2: ");
		scanf("%f",&N2);
		printf("Informe sua nota 3: ");
		scanf("%f",&N3);
		MA=(N1+N2+N3)/3;
		SOMA+=MA;
		if(MA>=6){
			printf("Aprovado!\n");
		}else
		{
			printf("Reprovado.\n");
		}
	}
	MT=SOMA/3;
	printf("A media da turma toda e de %.2f\n",MT);
	return 0;
}