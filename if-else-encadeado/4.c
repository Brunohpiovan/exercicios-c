#include <stdio.h>


int main(int argc, char** argv)
{
	
	int IDD;
	
	printf("Informe sua idade: ");
	scanf("%d",&IDD);
	if(IDD>65){
		printf("voce esta na melhor idade.");
	}else if(IDD>40){
		printf("Voce esta na meia idade.");
	}else if(IDD>30){
		printf("voce e adulto.");
	}else if(IDD>18){
		printf("voce e adulto jovem.");
	}else if(IDD>12){
		printf("voce e adolescente.");
	}else if(IDD>2){
		printf("voce e crianca.");
	}else
	{
		printf("voce e bebe.");
	}
	return 0;
}