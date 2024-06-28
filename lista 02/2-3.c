/*
ENTRADA:altura,raio,preço
PROCESSAMENTO:AT=2*3.14*R*H+2*3.14*pow(R,2);
		QL=AT/15;
		PT=QL*PRECO;
SAIDA:quantidade de latas e valor
*/
#include <stdio.h>
#include <math.h>

int main()
{		
	float AT,R,H,PRECO,QL,PT;
	
		printf("qual a altura do tanque? ");
		scanf("%f",&H);
		printf("qual o raio do tanque? ");
		scanf("%f",&R);
		printf("qual o preco de cada lata?(R$) ");
		scanf("%f",&PRECO);
		AT=2*3.14*R*H+2*3.14*pow(R,2);
		QL=AT/15;
		PT=QL*PRECO;
		printf("vao ser necessarias %.1f %s %.2f",QL,"latas,e o valor total foi",PT);
		
	
	return 0;
}