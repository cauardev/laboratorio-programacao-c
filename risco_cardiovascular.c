#include <stdio.h>
#include <stdlib.h>

int perguntaSimNao(char pergunta[]) {
    int resp;
    printf("%s (1-SIM / 2-NAO): ", pergunta);
    scanf("%d", &resp);
    return resp == 1; // verifica os bits 1 - verdadeiro, 0 - falso
}


float calcularImc(float peso, float altura) {
    return peso / (altura * altura); // calcula o IMC
}

void mostrarFatores(int tabagismo, int diabetes, int historicoDeDoenca, int sedentarismo, int estresse, int sonoInadequado, int ultraprocessados) {
    if (tabagismo) printf("Fator de risco: tabagismo\n");
    if (diabetes)  printf("Fator de risco: diabetes\n");
    if (historicoDeDoenca) printf("Fator de risco: historico de doença\n");
    if (sedentarismo) printf("Fator de risco: Sedentarismo\n");
    if (ultraprocessados) printf("Fator de risco: Alimentação rica em ultraprocessados\n");
    if (estresse) printf("Fator de risco: Estresse cronico elevado\n");
    if (sonoInadequado) printf("Fator de risco: Sono Inadequado\n");
    if (!tabagismo && !diabetes && !historicoDeDoenca && !sedentarismo && !ultraprocessados && !estresse && !sonoInadequado) printf("Sem fatores de risco\n"); //verifica os fatores de risco
}

int main() {
    char nome[50];
    int idade;
    float peso, altura;

    printf ("============================="
            "\nSISTEMA DE ANALISE DE RISCO"
            "\n=============================");

    printf ("\nDigite seu nome: ");
    scanf ("%49s", nome);
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);
    printf ("Digite sua altura:");
    scanf ("%f", &altura);

    int tabagismo         = perguntaSimNao("Tabagismo?");
    int diabetes          = perguntaSimNao("Diabetes?");
    int historicoDeDoenca = perguntaSimNao("Historico de doenca na familia?");
    int sedentarismo      = perguntaSimNao("Sedentarismo?");
    int estresse          = perguntaSimNao("Estresse cronico elevado?");
    int sonoInadequado    = perguntaSimNao("Sono inadequado?");
    int ultraprocessados  = perguntaSimNao("Alimentacao rica em ultraprocessados?");

    float imc = calcularImc(peso, altura);
    printf("IMC: %.2f\n", imc);

    mostrarFatores(tabagismo, diabetes, historicoDeDoenca, sedentarismo, estresse, sonoInadequado, ultraprocessados); // sistema ainda nao finalizado
    return 0;
}
