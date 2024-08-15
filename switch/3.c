#include <stdio.h>
#include <math.h>


int main(int argc, char** argv)
{
	
	int E;
	float L,ALT,A,B,R;
	
	printf("MENU:\n");
	printf("1-Calcular a area de um retangulo\n");
	printf("2-Calcular a area de um triangulo\n");
	printf("3-Calcular a area de um circulo.\n");
	scanf("%d",&E);
	
	switch(E){
		case 1:
			printf("Informe a largura do retangulo: ");
			scanf("%f",&L);
			printf("Informe a altura do retangulo: ");
			scanf("%f",&ALT);
			A =ALT * L;
			printf("A area do retangulo e de %.2f cm^2",A);	
			break;
		case 2:
			printf("Informe a altura do triangulo:");
			scanf("%f",&ALT);
			printf("Informe a base do triangulo:");
			scanf("%f",&B);
			A = B * ALT / 2;
			printf("A area do triangulo e de %.2f cm^2",A);			
			break;
		case 3:
			printf("Informe o raio do circulo:");
			scanf("%f",&R);
			A = M_PI * pow(R,2);
			printf("A area do circulo e de %.2f cm^2",A);
			break;
		default:
			printf("Opcao incorreta.");
	}
	
	
	return 0;
}