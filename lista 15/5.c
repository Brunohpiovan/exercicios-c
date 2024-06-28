#include <stdio.h>


int main(int argc, char** argv)
{
	
	char MOD[20];
	float CFAB,VF;
	int X;
	
	for(X=1;X<=5;X++){
		printf("Qual o valor de fabrica do veiculo? ");
		scanf("%f",&CFAB);
		fflush(stdin);
		printf("Qual o modelo do veiculo? ");
		gets(MOD);
		if(CFAB<12000){
			VF=CFAB+(CFAB*(5.0/100.0));
			printf("O valor final ao consumidor do modelo %s e %.2f reais.\n",MOD,VF);
		}else if(CFAB>=12000 && CFAB<=25000){
			VF=CFAB+(CFAB*(10.0/100.0))+(CFAB*(15.0/100.0));
			printf("O valor final ao consumidor do modelo %s e %.2f reais.\n",MOD,VF);
			
		}else
		{
			VF=CFAB+(CFAB*(15.0/100.0))+(CFAB*(20.0/100.0));
			printf("O valor final ao consumidor do modelo %s e %.2f reais.\n",MOD,VF);
		}
	}
	return 0;
}