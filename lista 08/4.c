#include <stdio.h>
#include <locale.h>

int main()
{
	float N;
	
	setlocale(LC_ALL,"Portuguese");
	printf("informe sua nota: ");
	scanf("%f",&N);
	if (N>=1 && N<=2){
		printf("Situa��o: nota p�ssima!");
	}else if (N>=3 && N<=4){
		printf("Situa��o: nota ruim!");
	}else if (N>=5 && N<=6){
		printf("Situa��o: nota razo�vel!");
	}else if (N>=7 && N<8){
		printf("Situa��o: nota boa!");
	}else if (N>=8 && N<=9){
		printf("Situa��o: nota muito boa!");
	}else if (N>9 && N<=10){
		printf("Situa��o: nota �tima!");
	}
	else{
		printf("situa��o nao registrada.");
	}
	
	
	
	return 0;
}