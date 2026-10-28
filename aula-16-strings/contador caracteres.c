#include <stdio.h>

int main() {
    char palavra[50];
    int quantidade = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        quantidade++;
    }

    printf("A palavra \"%s\" tem %d letras.\n", palavra, quantidade);

    return 0;
}