/*
ENTRADA:X1,X2,Y1,Y2
PROCESSAMENTO:X=pow(X2-X1,2);
		XX=pow(Y2-Y1,2);
		XR=X+XX;
		R=sqrt(XR);
SAIDA:distancia
*/
#include <stdio.h>
#include <math.h>

int main()
{	
	float X1,X2,Y1,Y2,X,XX,XR;
	int R;
	
		printf("digite o x1 do plano: ");
		scanf("%f",&X1);
		printf("digite o y1 do plano: ");
		scanf("%f",&Y1);
		printf("digite o x2 do plano: ");
		scanf("%f",&X2);
		printf("digite o y2 do plano: ");
		scanf("%f",&Y2);
		X=pow(X2-X1,2);
		XX=pow(Y2-Y1,2);
		XR=X+XX;
		R=sqrt(XR);
		printf("a distancia entre os pontos e de %d",R);
		
	
	return 0;
}