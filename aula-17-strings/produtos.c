#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50], categoria[20], copia[50], descricao[100];

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") != 0 && strcmp(categoria, "PERIFERICO") != 0) {
        printf("Categoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, produto);

    printf("\n===== RESUMO DO CADASTRO =====\n");
    printf("Nome: %s\n", produto);
    printf("Quantidade de caracteres: %zu\n", strlen(produto));
    printf("Copia do nome: %s\n", copia);
    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: HARDWARE\n");
    } else {
        printf("Categoria: PERIFERICO\n");
    }
    printf("Descricao: %s\n", descricao);

    return 0;
}
