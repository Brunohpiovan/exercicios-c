#include <stdio.h>


int main(int argc, char** argv)
{
	
	float N1,N2,R;
	int E,X;
	
	
	for(X=1;X<=10;X++){
		printf("\nInforme o primeiro numero: ");
	   	scanf("%f",&N1);
		printf("Informe o segundo numero: ");
	   	scanf("%f",&N2);
	   	printf("\n(1)MEDIA ENTRE NUMEROS DIGITADOS\n");
	   	printf("(2)DIFERENCA DO MAIOR PRO MENOR\n");
		printf("(3)PRODUTO ENTRE OS NUMEROS DIGITADOS\n");
	   	printf("(4)DIVISAO DO PRIMEIRO PELO SEGUNDO\n");
	   	scanf("%d",&E);
		   	switch (E){
				  	case 1:
						R=(N1+N2)/2;
				  		printf("A media entre os numeros e %.1f",R);
				  		break;
				  	case 2:
						if(N1>N2){
							R=N1-N2;
							printf("A diferenca de %.1f para %.1f e de %.1f numeros.",N1,N2,R);
						}else if(N1<N2){
							R=N2-N1;
							printf("A diferenca de %.1f para %.1f e de %.1f numeros.",N2,N1,R);
						}else{
							printf("Os numeros sao iguais.");
						}
				  		break;
				  	case 3:
						R=N1*N2;
				  		printf("O produto entre os numeros e %.1f",R);
				  		break;
				  	case 4:
						if(N2!=0){
						   	R=N1/N2;
				  			printf("A divisao do primeiro para o segundo e %.1f",R);
						}else
						{
							printf("Para essa opcao,o segundo numero deve ser diferente de 0.");
						}
						break;
						
				  	default:
				  		printf("ERRO");
						
	   	}
		
	}
	
	
	return 0;
}