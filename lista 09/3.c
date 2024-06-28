#include <stdio.h>
#include <math.h>

int main()
{	
	int E;
	float H,L,B,R,AR,AC,AT;
	
	printf("escolha a opcao que deseja calcular:\n");
	printf("(1)Calcular a area de um retangulo.\n");
	printf("(2)Calcular a area de um circulo.\n");
	printf("(3)Calcular a area de um triangulo.\n");
	scanf("%d",&E);
	
	switch (E){
		case 1:
			printf("informe a altura do retangulo(cm): ");
			scanf("%f",&H);
			printf("informe a largura do retangulo(cm): ");
			scanf("%f",&L);
			AR=H*L;
			printf("A area do retangulo e de %.2f %s",AR,"cm^2.");
			break;
		case 2:
			printf("informe o raio do circulo(cm): ");
			scanf("%f",&R);
			AC=M_PI*pow(R,2);
			printf("A area do circulo e de %.2f %s",AC,"cm^2.");
			break;
		case 3:
			printf("informe a altura do triangulo(cm): ");
			scanf("%f",&H);
			printf("informe a base do triangulo(cm): ");
			scanf("%f",&B);
			AT=(B*H)/2;
			printf("A area do triangulo e de %.2f %s",AT,"cm^2.");
			break;
		default:
			printf("valor invalido.");
			break;
			
	}
	
	
	
	
	return 0;
}