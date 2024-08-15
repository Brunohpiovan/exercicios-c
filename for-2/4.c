#include <stdio.h>


int main(int argc, char** argv)
{
	
	int VEI,x;
	float MET,TEMP,VM,KM;
	
	printf("Quantos veiculos participarao do calculo? ");
	scanf("%d",&VEI);
	for(x=1;x<=VEI;x++){
		printf("Informe a distancia percorrida(metros): ");
		scanf("%f",&MET);
		printf("Informe o tempo(s): ");
		scanf("%f",&TEMP);
		VM=MET/TEMP;
		KM=VM*3.6;
		printf("A velocidade media foi de %.1f m/s e %.1f km/h\n",VM,KM);
		
	}
	return 0;
}