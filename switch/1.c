#include <stdio.h>


int main(int argc, char** argv)
{
	
	int E;
	
	printf("Escolha o monstro:\n");
	printf("1-Zikachu\n");
	printf("2-Zulbassauro\n");
	printf("3-Zharmander\n");
	scanf("%d",&E);
	switch(E){
		case 1:
			printf("Monstrinho eletrico da categoria rato.");
			break;
		case 2:
			printf("Monstrinho de grama da categoria semente.");
			break;
		case 3:
			printf("Monstrinho de fogo da categoria lagarto.");
			break;
		default:
			printf("Monstrinho nao cadastrado. Ha 8900 monstros! Temos que pegar!");
	}
	
	
	return 0;
}