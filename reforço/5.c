#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	
	int M;
	float V;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Quantas maçãs foram compradas? ");
	scanf("%d",&M);
	if(M<12){
		V=2.3*M;
		printf("O valor total de sua compra foi de %.2f %s",V,"R$");
	}else
	{
		V=2*M;
		printf("O valor total de sua compra foi de %.2f %s",V,"R$");
	}
	
	
	return 0;
}