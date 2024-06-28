#include <stdio.h>
#include <locale.h>

int main()
{
	float N;
	
	setlocale(LC_ALL,"Portuguese");
	printf("informe sua nota: ");
	scanf("%f",&N);
	if (N>=1 && N<=2){
		printf("Situação: nota péssima!");
	}else if (N>=3 && N<=4){
		printf("Situação: nota ruim!");
	}else if (N>=5 && N<=6){
		printf("Situação: nota razoável!");
	}else if (N>=7 && N<8){
		printf("Situação: nota boa!");
	}else if (N>=8 && N<=9){
		printf("Situação: nota muito boa!");
	}else if (N>9 && N<=10){
		printf("Situação: nota ótima!");
	}
	else{
		printf("situação nao registrada.");
	}
	
	
	
	return 0;
}