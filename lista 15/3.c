#include <stdio.h>
#include <math.h>


int main(int argc, char** argv)
{
	
	float N1,N2,R,R1,R2;
	int E,X,QU;
	
	printf("Quantas vezes voce deseja usar o programa? ");
	scanf("%d",&QU);
	for(X=1;X<=QU;X++){
		printf("\nInforme o primeiro numero: ");
	   	scanf("%f",&N1);
		printf("Informe o segundo numero: ");
	   	scanf("%f",&N2);
	   	printf("\n(1)O primeiro numero elevado ao segundo numero\n");
	   	printf("(2)Raiz quadrada de cada um dos numeros.\n");
		printf("(3)Raiz cubica de cada um dos numeros.\n");
	   	scanf("%d",&E);
		   	switch (E){
				  	case 1:
						R=pow(N1,N2);
				  		printf("o primeiro numero elevado ao segundo e %.1f.",R);
				  		break;
				  	case 2:
						R1=sqrt(N1);
						R2=sqrt(N2);
						printf("Raiz quadrada do primeiro numero:%.2f\n",R1);
						printf("Raiz quadrada do segundo numero:%.2f\n",R2);
				  		break;
				  	case 3:
						R1=cbrt(N1);
						R2=cbrt(N2);
				  		printf("Raiz cubica do primeiro numero:%.2f\n",R1);
						printf("Raiz cubica do segundo numero:%.2f\n",R2);
				  		break;
				  
						
				  	default:
				  		printf("ERRO");
						
	   	}
		
	}
	
	
	return 0;
}
