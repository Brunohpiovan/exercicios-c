#include <stdio.h>


int main(int argc, char** argv)
{
	
	int SEM,DIS;
	
	
	printf("Informe o periodo que esta cursando da faculdade: ");
	scanf("%d",&SEM);
	if(SEM>=7){
		printf("1-matricular na disciplina de Jogos Digitais\n");
		printf("2-Matricular na disciplina de Design de Jogos\n");
		printf("3-Matricular na disciplina de RealidadeVirtual\n");
		scanf("%d",&DIS);
		if(DIS==1){
			printf("Jogos Digitais confirmado");
		}else if(DIS==2){
			printf("Design confirmado");
		}else if(DIS==3){
			printf("RV confirmado");
		}
	}else
	{
		printf("Voce ainda nao pode se matricular em disciplinas optativas.");
	}
	return 0;
}