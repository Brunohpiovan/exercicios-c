#include <stdio.h>


int main(int argc, char** argv)
{
	
	int VI,VF;
	
	printf("Informe um valor inicial: ");
	scanf("%d",&VI);
	printf("Informe um valor final: ");
	scanf("%d",&VF);
	
	if(VI<VF){
		while(VI <= VF){
			printf("%d ",VI);
			VI++;
		}
	}else if(VI>VF){
		while(VI >= VF){
			printf("%d ",VI);
			VI--;
		}
	}
	
	
	return 0;
}