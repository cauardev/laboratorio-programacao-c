#include <stdio.h>

long long calcularFatorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void) {
    int numero;

    do {
        printf("Digite um numero entre 0 e 12: ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 12) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (numero < 0 || numero > 12);

    printf("%d! = %lld\n", numero, calcularFatorial(numero));

    return 0;
}
