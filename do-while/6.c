#include <stdio.h>



int main(int argc, char** argv)
{
	
	int m;

	do{
		printf("\ninforme um numero inteiro\n");
	   	printf("(1)Zikachu\n");
		printf("(2)Zulbassauro\n");
		printf("(3)Zharmander\n");
		printf("(0)Sair do monstrodex\n");
		scanf("%d",&m);
		switch (m){
			   	case 1:
					printf("Monstrinho eletrico da categoria rato.\n");
     				break;
			   	case 2:
			   	   	printf("Monstrinho de grama da categoria semente.\n");
			  		break;
			   	case 3:
					printf("Monstrinho de fogo da categoria lagarto.\n");
			   	   	break;
		}if(m!=1 && m!=2 && m!=3 && m!=0){
			printf("Monstrinho nao cadastrado. Ha 8900 monstros! Temos que pegar!\n");
		}
	
	}while(m!=0);
	
	printf("ENCERRADO");
	return 0;
}