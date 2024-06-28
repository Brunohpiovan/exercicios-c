#include <stdio.h>

int main()
{		
	float m;
	
	printf("informe sua nota da prova: ");
	scanf("%f",&m);

	if(m >= 4.0 && m<6.0){
		printf("\nvoce tem direito a recuperacao\n");
		
	}
	else if (m < 4.0){
		printf("voce foi reprovado.");
	}
	else{
		(m>=6.0);
		printf("voce foi aprovado!");
	}
		
	
	return 0;
}