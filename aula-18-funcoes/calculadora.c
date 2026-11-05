#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

double somar(double a, double b) { return a + b; }
double subtrair(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return a / b; }

int main(void) {
    int opcao;
    double n1, n2;

    do {
        exibirMenu();
        if (scanf("%d", &opcao) != 1) {
            if (feof(stdin)) break;
            while (getchar() != '\n');
            opcao = -1;
        }

        if (opcao == 0) {
            printf("Encerrando a calculadora...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &n1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &n2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, somar(n1, n2));
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, subtrair(n1, n2));
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("Erro: nao e possivel dividir por zero!\n");
                } else {
                    printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, dividir(n1, n2));
                }
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (1);

    return 0;
}
