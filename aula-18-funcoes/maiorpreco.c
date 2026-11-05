#include <stdio.h>

double maiorPreco(double a, double b) {
    return (a > b) ? a : b;
}

int main(void) {
    double p1, p2;

    printf("Digite o preco do produto 1: R$ ");
    scanf("%lf", &p1);
    printf("Digite o preco do produto 2: R$ ");
    scanf("%lf", &p2);

    if (p1 == p2) {
        printf("Os precos sao iguais: R$ %.2f\n", p1);
    } else {
        printf("O maior preco e: R$ %.2f\n", maiorPreco(p1, p2));
    }

    return 0;
}
