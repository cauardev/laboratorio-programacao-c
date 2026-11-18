#include <stdio.h>
#include "calculos.h"

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Dobro: %d\n", dobro(numero));

    return 0;
}
