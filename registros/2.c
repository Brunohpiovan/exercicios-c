#include <stdio.h>

struct DVD
{
	char titulo[50],genero[50];
	float duracao;
	int prateleira;	
};

int main(int argc, char** argv)
{
	struct DVD dvd;
	
	printf("Qual o titulo do dvd? ");
	gets(dvd.titulo);
	fflush(stdin);
	printf("Qual o genero do dvd? ");
	gets(dvd.genero);
	printf("Qual a duracao do dvd? ");
	scanf("%f",&dvd.duracao);
	printf("Em qual prateleira fica o dvd? ");
	scanf("%d",&dvd.prateleira);
	printf("\nDADOS DVD: \n");
	printf("Titulo:%s\n",dvd.titulo);
	printf("Genero:%s\n",dvd.genero);
	printf("Duracao:%.2f\n",dvd.duracao);
	printf("Titulo:%d\n",dvd.prateleira);
	return 0;
}