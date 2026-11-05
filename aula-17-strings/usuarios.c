#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], perfil[20], confirmacao[50], mensagem[100];

    printf("Digite o primeiro nome do usuario: ");
    scanf("%49s", nome);

    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") != 0 && strcmp(perfil, "COMUM") != 0) {
        printf("Perfil invalido! Use ADMIN ou COMUM.\n");
        return 1;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, nome);
    strcat(mensagem, "!");

    printf("\n===== CADASTRO =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Confirmacao do nome: %s\n", confirmacao);
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: ADMIN (acesso total ao sistema)\n");
    } else {
        printf("Perfil: COMUM (acesso limitado)\n");
    }
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
