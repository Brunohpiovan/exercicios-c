#include <stdio.h>

int main()
{
	int m;

	printf("informe um numero inteiro\n");
	printf("(1)Zikachu\n");
	printf("(2)Zulbassauro\n");
	printf("(3)Zharmander\n");
	scanf("%d",&m);
	switch (m){
		case 1:
			printf("Monstrinho elétrico da categoria rato.");
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