#include <stdio.h>


int main(int argc, char** argv)
{
	
	int x,IDD,SOMA=0;
	
	for(x=1;x<=10;x++){
		printf("Informe sua idade: ");
		scanf("%d",&IDD);
		printf("Hello, voce tem %d anos\n",IDD);
		SOMA +=IDD;
	}
	printf("\nA soma de todas idades e de %d anos\n",SOMA);
	return 0;
}