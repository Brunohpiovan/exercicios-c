#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    char capital[20];
    
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o nome de uma capital brasileira:(sem acentos)");
    gets(capital);

    if (strcmp(capital, "Sao Paulo") == 0 || strcmp(capital, "Rio de Janeiro") == 0 ||
        strcmp(capital, "Vitoria") == 0 || strcmp(capital, "Belo Horizonte") == 0) {
        printf("%s pertence � regi�o Sudeste.\n", capital);
    }
    else if (strcmp(capital, "Salvador") == 0 || strcmp(capital, "Recife") == 0 ||
             strcmp(capital, "Fortaleza") == 0 || strcmp(capital, "Natal") == 0 ||
             strcmp(capital, "Joao Pessoa") == 0 || strcmp(capital, "Aracaju") == 0 ||
             strcmp(capital, "Maceio") == 0 || strcmp(capital, "Teresina") == 0) {
        printf("%s pertence � regi�o Nordeste.\n", capital);
    }
    else {
        printf("%s n�o est� na lista de capitais brasileiras consideradas.\n", capital);
        printf("N�o � poss�vel determinar a regi�o.\n");
    }

    return 0;
}