#include <stdio.h>

int lados(){
	int lados;
	while(lados<3 || lados>5){
		printf("Informe o numero de lados do seu poligono: ");
		scanf("%d",&lados);
	}
	return lados;
}
void apresentarpol(int lados){
	if(lados==3){
		printf("TRIANGULO.");
	}else if(lados==4){
		printf("QUADRADO.");
	}else if(lados==5){
		printf("PENTAGONO.");
	}
}

int main(int argc, char** argv)
{
	lados();
	apresentarpol(lados());
	return 0;
}