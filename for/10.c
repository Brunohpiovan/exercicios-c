#include <stdio.h>


int main(int argc, char** argv)
{
	
	int VI,VF;
	
	printf("Informe um valor inicial: ");
	scanf("%d",&VI);
	printf("Informe um valor final: ");
	scanf("%d",&VF);
	
	if(VI<VF){
		for(VI ; VI<=VF ; VI++){
			printf("%d ",VI);
		}
	}else if(VI>VF){
		for(VI ; VI>=VF ; VI--){
			printf("%d ",VI);
		}
	}
	
	
	return 0;
}