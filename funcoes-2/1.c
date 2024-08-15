#include <stdio.h>

void menubasico(){
	printf("\n1 - Nome do Pais\n");
	printf("2 - Nome do Estado\n");
	printf("3 - Sigla Universidade\n");
	printf("4 - Disciplina e Semestre\n");
}
int valorInvalido(){
	int X;
	do{
		printf("\nValor invalido.Informe uma opcao entre 1 e 4:");
		scanf("%d",&X);
	}while(X<1 || X>4);
	return X;
}
int leropcao(){
	int X;
	scanf("%d",&X);
	if(X<1 || X>4){
		X=valorInvalido();
	}
	return X;
}
void apresentar(int X){
	if(X==1){
		printf("Brasil");
	}else if(X==2){
		printf("Parana");
	}else if(X==3){
		printf("UTFPR");
	}else if(X==4){
		printf("AS61B-2024/1");
	}
}
int main(int argc, char** argv)
{
	int X;
	
	menubasico();
	X=leropcao();
	apresentar(X);
	
	return 0;
}