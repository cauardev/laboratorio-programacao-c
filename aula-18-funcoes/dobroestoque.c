#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicial, final;

    printf("Digite a quantidade inicial do estoque: ");
    scanf("%d", &inicial);

    final = dobro(inicial);

    printf("Quantidade inicial: %d\n", inicial);
    printf("Quantidade final (dobro): %d\n", final);

    return 0;
}
