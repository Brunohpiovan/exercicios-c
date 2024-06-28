#include <stdio.h>
#include <locale.h>

int main()
{	
	int E;
	
	setlocale(LC_ALL,"Portuguese");
	printf("informe um numero inteiro(1 a 12):\n");
	printf("(1)JANEIRO\n");
	printf("(2)FEVEREIRO\n");
	printf("(3)MARÇO\n");
	printf("(4)ABRIL\n");
	printf("(5)MAIO\n");
	printf("(6)JUNHO\n");
	printf("(7)JULHO\n");
	printf("(8)AGOSTO\n");
	printf("(9)SETEMBRO\n");
	printf("(10)OUTUBRO\n");
	printf("(11)NOVEMBRO\n");
	printf("(12)DEZEMBRO\n");
	scanf("%d",&E);
	switch(E){
		case 1:
			printf("O mes de janeiro tem 31 dias.");
			break;
		case 2:
			printf("O mes de fevereiro tem 28 dias em anos normais e 29 em bissexto.");
			break;
		case 3:
			printf("O mes de março tem 31 dias.");
			break;
		case 4:
			printf("O mes de abril tem 30 dias.");
			break;
		case 5:
			printf("O mes de maio tem 31 dias.");
			break;
		case 6:
			printf("O mes de junho tem 30 dias.");
			break;
		case 7:
			printf("O mes de julho tem 31 dias.");
			break;
		case 8:
			printf("O mes de agosto tem 31 dias.");
			break;
		case 9:
			printf("O mes de setembro tem 30 dias.");
			break;
		case 10:
			printf("O mes de outubro tem 31 dias.");
			break;
		case 11:
			printf("O mes de novembro tem 30 dias.");
			break;
		case 12:
			printf("O mes de dezembro tem 31 dias.");
			break;
	}
	
	
	return 0;
}