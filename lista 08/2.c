#include <stdio.h>

int main()
{
	char F;
	int E;
	float S,SF,SS;
	
	printf("Qual seu estado civil?(1 para solteiro e 2 para comprometido): ");
	scanf("%d",&E);
	printf("voce tem filhos?(S para sim ou N para nao.): ");
	scanf(" %c",&F);
	printf("qual e seu salario?(R$): ");
	scanf("%f",&S);
	SF=S*20/100;
	SS=S*15/100;
	
	if(E==1){
		printf("Voce nao tem direito a beneficios.");
	}else if (E==2 && F=='S' ){
		printf("voce recebera %.2fR$ %s",SF,"de acrescimo no seu salario");
	}else if(E==2 && F=='N'){
		printf("voce recebera %.2fR$ %s",SS,"de acrescimo no seu salario");
	}
	return 0;
}