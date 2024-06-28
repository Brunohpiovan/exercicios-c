#include <stdio.h>


int main(int argc, char** argv)
{
	
	
	float SM,C;
	int X;
	
	
	for(X=1;X<=10;X++){
		printf("Qual o valor do seu saldo medio no ano anterior? ");
		scanf("%f",&SM);
		if(SM>400){
			C=SM*0.3;
			printf("O seu saldo medio e %.2f\n",SM);
			printf("E o valor de seu credito e %.2f\n",C);
		}else if(SM<=400 && SM>300){
			C=SM*0.25;
			printf("O seu saldo medio e %.2f\n",SM);
			printf("E o valor de seu credito e %.2f\n",C);
		}else if(SM<=300 && SM>200){
			C=SM*0.2;
			printf("O seu saldo medio e %.2f\n",SM);
			printf("E o valor de seu credito e %.2f\n",C);
		}else
		{
			C=SM*0.1;
			printf("O seu saldo medio e %.2f\n",SM);
			printf("E o valor de seu credito e %.2f\n",C);
		}
	}
	return 0;
}