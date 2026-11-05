#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (verificarPar(numero) == 1) {
        printf("O numero %d e PAR (retorno: 1)\n", numero);
    } else {
        printf("O numero %d e IMPAR (retorno: 0)\n", numero);
    }

    return 0;
}
