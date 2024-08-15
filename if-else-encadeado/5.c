#include <stdio.h>



int main(int argc, char** argv)
{
	
	float IMC,ALT,MASSA;
	
	printf("Informe sua altura(m):");
	scanf("%f",&ALT);
	printf("Informe sua massa(kg):");
	scanf("%f",&MASSA);
	IMC=MASSA/(ALT * ALT);
	if(IMC<17){
		printf("IMC=%.2f\n",IMC);
		printf("Muito abaixo do peso.");
	}else if(IMC<18.5){
		printf("IMC=%.2f\n",IMC);
		printf("Abaixo do peso.");
	}else if(IMC<25){
		printf("IMC=%.2f\n",IMC);
		printf("Peso normal.");
	}else if(IMC<30){
		printf("IMC=%.2f\n",IMC);
		printf("Acima do peso.");
	}else if(IMC<35){
		printf("IMC=%.2f\n",IMC);
		printf("Obesidade I.");
	}else if(IMC<40){
		printf("IMC=%.2f\n",IMC);
		printf("Obesidade II(SEVERA).");
	}else
	{
		printf("IMC=%.2f\n",IMC);
		printf("Obesidade III(Morbida)");
	}
	

	
	
	return 0;
}