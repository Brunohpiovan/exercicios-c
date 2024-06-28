#include <stdio.h>



int main(int argc, char** argv)
{
	
	
	char E,E2;
	float PESO,ALT,M;
	
	
	printf("Voce deseja fazer o teste?(s/n) ");
	scanf(" %c",&E);
	if(E=='S'||E=='s'){
		do{
			printf("Qual o seu peso? ");
			scanf("%f",&PESO);
			printf("Qual a sua altura? ");
			scanf("%f",&ALT);
			M=PESO*(ALT*ALT);
			printf("A sua massa corporal e de %.2f ",M);
			printf("\nVoce deseja fazer o teste novamente?(s/n)");
			scanf(" %c",&E2);
		}while(E2=='s'||E2=='S');
	}
	
	
	
	return 0;
}