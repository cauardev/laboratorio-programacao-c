#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], codigo[10], copia[50], mensagem[100];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") != 0 && strcmp(codigo, "SI") != 0) {
        printf("Codigo de curso invalido! Use CC ou SI.\n");
        return 1;
    }

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, nome);
    strcat(mensagem, "!");

    printf("\n===== DADOS DO ESTUDANTE =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Nome armazenado: %s\n", copia);
    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else {
        printf("Curso: Sistemas de Informacao\n");
    }
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
