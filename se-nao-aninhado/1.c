#include <stdio.h>

int main(int argc, char** argv)
{
	
	float A;
	int IDD;
	
	printf("informe sua altura em metros: ");
	scanf("%f",&A);
	printf("informe sua idade: ");
	scanf("%d",&IDD);
 	
 	if (A<1.6){
		 if(IDD<5){
			 printf("Pode brincar no pula-pula e Casinha");
		 }else if(IDD>=5 && IDD<8){
			 printf("Pode brincar na prancha do pirata e piscina de bolinhas");
		 }else
		 {
			 printf("Pode brincar de pebolim, ping-pong e basquete");
		 }
	 }else
	 {
		 printf("Voce e muito grande para entrar no parque");
	 }
	
	return 0;
}