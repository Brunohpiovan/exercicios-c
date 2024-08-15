#include <stdio.h>


int main(int argc, char** argv)
{
	
	char E;
	
	printf("MENU:\n");
	printf("A-AVIAO\n");
	printf("B-CARRO\n");
	printf("C-CRUZEIRO\n");
	scanf("%c",&E);
	
	switch(E){
		case 'A':
			printf("E mais rapido!");
			break;
		case 'a':
			printf("E mais rapido!");
			break;
		case 'B':
			printf("E mais barato!");
			break;
		case 'b':
			printf("E mais barato!");
			break;
		case 'C':
			printf("E mais bonito!");
			break;
		case 'c':
			printf("E mais bonito!");
			break;
		default:
			printf("Opcao incorreta.");
	}
	
	return 0;
}