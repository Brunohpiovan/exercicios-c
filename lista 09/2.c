#include <stdio.h>

int main()
{	char V;

	printf("escolha uma opcao:\n");
	printf("(A)AVIAO\n");
	printf("(B)CARRO\n");
	printf("(C)CRUZEIRO\n");
	scanf("%c",&V);
	switch (V){
		case 'A':
			printf("E mais rapido!");
			break;
		case 'B':
			printf("E mais barato!");
			break;
		case 'C':
			printf("E mais bonito!");
			break;
		default:
			printf("OPCAO INVALIDA.");
			break;
			
	}
	
	return 0;
}