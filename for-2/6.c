#include <stdio.h>



int main(int argc, char** argv)
{
	
	
	int x,V,N1,N2;
	
	printf("Quantas vezes voce deseja usar o programa? ");
	scanf("%d",&V);
	for(x=1;x<=V;x++){
		printf("Informe um numero: ");
		scanf("%d",&N1);
		printf("Informe outro numero: ");
		scanf("%d",&N2);
		if(N1>N2){
			printf("%d e maior que %d\n",N1,N2);
		}else if(N1<N2){
			printf("%d e menor que %d\n",N1,N2);
		}else
		{
			printf("%d e igual %d\n",N1,N2);
		}
	}
	return 0;
}