#include <stdio.h>


int menu(){
	int E;
	printf("\nMENU:\n");
	printf("1-Soma\n");
	printf("2-Subtracao\n");
	printf("3-Divisao\n");
	printf("4-Multiplicacao\n");
	printf("5-Sair\n");
	scanf("%d",&E);
	return E;
}
void soma(){
	float N1,N2,R;
	printf("Informe o primeiro valor: ");
	scanf("%f",&N1);
	printf("Informe o segundo valor: ");
	scanf("%f",&N2);
	R=N1+N2;
	printf("%.1f + %.1f=%.1f\n",N1,N2,R);
}
void subtracao(){
	float N1,N2,R;
	printf("Informe o primeiro valor: ");
	scanf("%f",&N1);
	printf("Informe o segundo valor: ");
	scanf("%f",&N2);
	R=N1-N2;
	printf("%.1f - %.1f=%.1f\n",N1,N2,R);
}
void divisao(){
	float N1,N2,R;
	printf("Informe o primeiro valor: ");
	scanf("%f",&N1);
	printf("Informe o segundo valor: ");
	scanf("%f",&N2);
	R=N1/N2;
	printf("%.1f / %.1f=%f\n",N1,N2,R);
}
void multiplicacao(){
	float N1,N2,R;
	printf("Informe o primeiro valor: ");
	scanf("%f",&N1);
	printf("Informe o segundo valor: ");
	scanf("%f",&N2);
	R=N1*N2;
	printf("%.1f x %.1f=%.1f\n",N1,N2,R);
}
void calculos(int E){
	if(E==1){
		soma();
	}else if(E==2){
		subtracao();
	}else if(E==3){
		divisao();
	}else if(E==4){
		multiplicacao();
	}
}

int main(int argc, char** argv)
{
	int opcao;
	
	do{
		opcao=menu();
		calculos(opcao);
	}while(opcao!=5);
	printf("Programa encerrado.");
	return 0;
}