#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	
	
	int E,E1;
	float N1,N2,R,R2;
	
	
	printf("\nBEM VINDO AO APP DE CONVERSOES!!\n");
	do{
		printf("Informe o primeiro numero: ");
		scanf("%f",&N1);
		printf("Informe o segundo numero: ");
		scanf("%f",&N2);
		printf("\nOPCOES\n");
		printf("(1)PRIMEIRO NUMERO ELEVADO AO SEGUNDO\n");
		printf("(2)RAIZ QUADRADA DE CADA UM DOS NUMEROS\n");
		printf("(3)RAIZ CUBICA DE CADA UM DOS NUMEROS\n");
		scanf("%d",&E);
		switch(E){
			case 1:
				R=pow(N1,N2);
				printf("resultado:%.2f",R);
				break;
			case 2:
				R=sqrt(N1);
				R2=sqrt(N2);
				printf("resultado primeiro numero:%.2f\n",R);
				printf("resultado segundo numero:%.2f",R2);
				break;
			case 3:
				R=cbrt(N1);
				R2=cbrt(N2);
				printf("resultado primeiro numero:%.2f\n",R);
				printf("resultado segundo numero:%.2f",R2);
				break;
			default:
				printf("Opcao invalida,");
		}
		printf("\nvoce seja utilizar o programa novamente?");
		printf("\n(1)SIM");
		printf("\n(0)NAO\n");
		scanf("%d",&E1);
		
	}while(E1!=0);
	return 0;
}