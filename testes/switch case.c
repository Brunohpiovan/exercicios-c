#include <stdio.h>

int main()
{
	int d;
	
	printf("innforme um valor de 1 a 7:\n");
	scanf("%d",&d);
	
	switch(d){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		case 3:
			printf("terca-feira\n");
			break;
		case 4:
			printf("quarta-feira\n");
			break;
		case 5:
			printf("quinta-feira\n");
			break;
		case 6:
			printf("sexta-feira\n");
			break;
		case 7:
			printf("sabado-feira\n");
			break;
		default:
			printf("valor invalido");
			break;
	}
	
	return 0;
}