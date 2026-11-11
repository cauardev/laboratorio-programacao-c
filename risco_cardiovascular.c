#include <stdio.h>
#include <stdlib.h>

// 1) Pergunta sim/não: devolve 1 (sim) ou 0 (não)
int perguntaSimNao(char pergunta[]) {
    int resp;
    printf("%s (1-SIM / 2-NAO): ", pergunta);
    scanf("%d", &resp);
    return resp == 1;
}

// 2) Recebe peso e altura, devolve o IMC
float calcularImc(float peso, float altura) {
    return peso / (altura * altura);
}

// 3) Recebe as respostas e mostra a mensagem
void mostrarFatores(int tabagismo, int diabetes) {
    if (tabagismo) printf("Fator de risco: tabagismo\n");
    if (diabetes)  printf("Fator de risco: diabetes\n");
    if (!tabagismo && !diabetes) printf("Sem fatores de risco\n");
}

int main() {
    char nome[50];
    int idade;
    float peso, altura;

    printf ("============================="
            "\nSISTEMA DE ANALISE DE RISCO"
            "\n=============================");

    printf ("\nDigite seu nome: ");
    scanf ("%49s", &nome);
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);
    printf ("Digite sua altura:");
    scanf ("%f", &altura);

    int tabagismo = perguntaSimNao("Tabagismo?");
    int diabetes  = perguntaSimNao("Diabetes?");

    float imc = calcularImc(peso, altura);
    printf("IMC: %.2f\n", imc);

    mostrarFatores(tabagismo, diabetes);
    return 0;
}
