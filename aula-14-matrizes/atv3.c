#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0;

    printf("Matriz 3x3:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}