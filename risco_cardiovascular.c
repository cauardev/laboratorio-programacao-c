#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 5

// descarta o que sobrou digitado ate o ENTER (funcao simples, porem ajuda na otimização do sistema)
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// le um numero inteiro entre min e max; repete ate o usuario digitar um valor valido
int lerInteiro(char texto[], int min, int max) {
    int valor, ok, c;

    do {
        printf("%s", texto);
        ok = scanf("%d", &valor);

        if (ok == 1) {
            c = getchar();        // confere o que veio logo depois do numero
            if (c != '\n') {      // ex.: "12abc" ou "1,5" nao sao aceitos
                ok = 0;
                limparBuffer();
            }
        } else {
            limparBuffer();       // usuario digitou letras
        }

        if (ok == 1 && (valor < min || valor > max)) {
            ok = 0;
        }

        if (ok != 1) {
            printf("Valor invalido! Digite um numero inteiro entre %d e %d.\n", min, max);
        }
    } while (ok != 1);

    return valor;
}

// le um numero real entre min e max; repete ate o usuario digitar um valor valido
float lerReal(char texto[], float min, float max) {
    float valor;
    int ok, c;

    do {
        printf("%s", texto);
        ok = scanf("%f", &valor);

        if (ok == 1) {
            c = getchar();
            if (c != '\n') {      // ex.: "1,75" (com virgula) nao e aceito
                ok = 0;
                limparBuffer();
            }
        } else {
            limparBuffer();
        }

        // escrito assim para tambem recusar valores como "nan"
        if (ok == 1 && !(valor >= min && valor <= max)) {
            ok = 0;
        }

        if (ok != 1) {
            printf("Valor invalido! Digite um numero entre %.2f e %.2f (use ponto, ex: 1.75).\n", min, max);
        }
    } while (ok != 1);

    return valor;
}

// le o nome completo (com espacos) e limpa o que sobrar
void lerNome(char nome[]) {
    printf("\nNome: ");
    scanf(" %49[^\n]", nome);  // o espaco antes do % ignora ENTERs vazios
    limparBuffer();            // se o nome passar de 49 letras, descarta o resto
}

// pergunta sim/nao: devolve 1 (sim) ou 0 (nao)
int perguntaSimNao(char pergunta[]) {
    printf("\n%s\n", pergunta);
    return lerInteiro("(1-SIM / 0-NAO): ", 0, 1);
}

float calcularImc(float peso, float altura) {
    return peso / (altura * altura); // calcula o IMC
}

// le todos os dados de um paciente e guarda nas matrizes
void lerPaciente(char nomes[][50], float dados[][13], int i) {
    printf("\n----------------------------------------");
    printf("\nPACIENTE %d", i + 1);
    printf("\n----------------------------------------\n");

    // primeiro: dados do paciente
    printf("\n>> DADOS DO PACIENTE\n");
    lerNome(nomes[i]);
    dados[i][0] = lerInteiro("\nIdade (anos): ", 0, 120);
    dados[i][6] = lerReal("\nPeso (kg): ", 1, 500);
    dados[i][7] = lerReal("\nAltura (m): ", 0.5, 2.5);

    // depois: fatores de saude (colocado na ordem certa)
    printf("\n>> FATORES DE SAUDE\n");
    dados[i][1]  = lerInteiro("\nPressao arterial sistolica (mmHg): ", 50, 300);
    dados[i][2]  = perguntaSimNao("Tabagismo?");
    dados[i][3]  = perguntaSimNao("Diabetes?");
    dados[i][4]  = perguntaSimNao("Historico de doenca cardiaca?");
    dados[i][5]  = lerReal("\nColesterol LDL (mg/dL): ", 10, 500);
    dados[i][8]  = perguntaSimNao("Sedentarismo?");
    dados[i][9]  = perguntaSimNao("Alimentacao rica em ultraprocessados?");
    dados[i][10] = perguntaSimNao("Estresse cronico elevado?");
    dados[i][11] = perguntaSimNao("Sono inadequado?");
    dados[i][12] = perguntaSimNao("Sexo biologico masculino?");
}

// soma os pontos de um paciente: critico = 3, moderado = 2, leve = 1, logica atualizada
int calcularPontuacao(float dados[][13], int i) {
    int pontos = 0;

    // copia a linha do paciente para variaveis com nome
    float idade            = dados[i][0];
    float pressao          = dados[i][1];
    int tabagismo          = dados[i][2];
    int diabetes           = dados[i][3];
    int historico          = dados[i][4];
    float ldl              = dados[i][5];
    float imc              = calcularImc(dados[i][6], dados[i][7]);
    int sedentarismo       = dados[i][8];
    int ultraprocessados   = dados[i][9];
    int estresse           = dados[i][10];
    int sonoInadequado     = dados[i][11];
    int sexoMasculino      = dados[i][12];

    // fatores criticos (3 pontos cada)
    if (idade >= 65) pontos += 3;
    if (pressao >= 160) pontos += 3;
    if (tabagismo == 1) pontos += 3;

    // fatores moderados (2 pontos cada)
    if (diabetes == 1) pontos += 2;
    if (historico == 1) pontos += 2;
    if (ldl >= 160) pontos += 2;
    if (imc >= 30) pontos += 2;

    // fatores leves (1 ponto cada)
    if (sedentarismo == 1) pontos += 1;
    if (ultraprocessados == 1) pontos += 1;
    if (estresse == 1) pontos += 1;
    if (sonoInadequado == 1) pontos += 1;
    if (sexoMasculino == 1) pontos += 1;

    return pontos;
}

// recebe a pontuacao e devolve o texto da classificacao
const char* classificarRisco(int pontos) {
    if (pontos <= 4) return "Menor de 10%";
    else if (pontos <= 9) return "Entre 10% e 20%";
    else if (pontos <= 14) return "Entre 20% e 30%";
    else if (pontos <= 18) return "Entre 30% e 50%";
    else return "Acima de 50%";
}

// mostra o relatorio final com nome e classificacao de cada paciente
void mostrarRelatorio(char nomes[][50], float dados[][13], int qtd) {
    int i;
    printf("\n\n========================================"
           "\n      RELATORIO DE RISCO"
           "\n========================================\n");

    for (i = 0; i < qtd; i++) {
        int pontos = calcularPontuacao(dados, i);
        printf("\nPaciente: %s", nomes[i]);
        printf("\nClassificacao: %s\n", classificarRisco(pontos));
    }
    printf("\n========================================\n");
}

int main() {
    char nomes[MAX_PACIENTES][50];     // matriz de caracteres: nomes
    float dados[MAX_PACIENTES][13];    // matriz numerica: fatores de risco
    int qtd, i;

    printf("========================================"
           "\n      SISTEMA DE ANALISE DE RISCO"
           "\n========================================\n");

    qtd = lerInteiro("\nQuantidade de pacientes (3 a 5): ", 3, MAX_PACIENTES);

    for (i = 0; i < qtd; i++) {
        lerPaciente(nomes, dados, i);
    }

    printf("\n========================================"
           "\nQuantidade de pacientes: %d\n\n", qtd);
    for (i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }

    mostrarRelatorio(nomes, dados, qtd);
    return 0; //apenas 10-20% de IA utilizado nesta atividade.
}
