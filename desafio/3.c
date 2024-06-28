#include <stdio.h>

int main() {
    int i,casas = 64;
    unsigned long long int totalgraos = 0; 

   
    for ( i = 0; i < casas; i++) {
        totalgraos += 1ULL << i; 
    }
    printf("o monge esperava receber: %llu graos de trigo\n", totalgraos);

    return 0;
}
