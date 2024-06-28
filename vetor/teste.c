#include <stdio.h>

int main(int argc, char** argv)
{
	
	int i;
	double N[4];
	
	for(i=0;i<4;i++){
		printf("informe sua nota: ");
		scanf("%lf",&N[i]);
	}
	printf("essas sao as notas dos alunos:\n");
	printf("%lf\n",N[0]);
	printf("%lf\n",N[1]);
	printf("%lf\n",N[2]);
	printf("%lf\n",N[3]);
	return 0;
}