#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	int P,M;
	
	printf("Qual periodo esta cursando?\n");
	printf("(1)primeiro\n");
	printf("(2)segundo\n");
	printf("(3)terceiro\n");
	printf("(4)quarto\n");
	printf("(5)quinto\n");
	printf("(6)sexto\n");
	printf("(7)setimo\n");
	printf("(8)oitavo\n");
	printf("(9)nono\n");
	printf("(10)decimo\n");
	scanf("%d",&P);
	
	if(P>=7 && P<=10){
		printf("\n(1)matricular na disciplina de Jogos Digitais.\n");
		printf("\n(2)Matricular na disciplina de Design de Jogos.\n");
		printf("\n(3)Matricular na disciplina de Realidade Virtual.\n");
		scanf("%d",&M);
		
		if(M==1){
			printf("Jogos Digitais confirmado.");
		}else if (M==2){
			printf("Design confirmado.");
		}else if (M==3){
			printf("RV confirmado.");
		}else
		{
			printf("disciplina inexistente.");
		}
	}else
	{
		printf("Voce ainda nao pode se matricular em disciplinas optativas.");
	}
	
	
	
	return 0;
}