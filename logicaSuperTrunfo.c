#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {

    // Cadastro da Carta 1
    struct Carta carta1 = {
        "SP",
        "SP01",
        "São Paulo",
        12300000,
        1521.11,
        828000.0,
        15
    };

    // Cadastro da Carta 2
    struct Carta carta2 = {
        "RJ",
        "RJ01",
        "Rio de Janeiro",
        6000000,
        1200.25,
        360000.0,
        12
    };

    // Cálculo da densidade populacional
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===============================
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // Neste exemplo: POPULAÇÃO
    // ===============================

    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           carta1.cidade, carta1.estado, carta1.populacao);

    printf("Carta 2 - %s (%s): %d\n\n",
           carta2.cidade, carta2.estado, carta2.populacao);

    // Estrutura de decisão para determinar a vencedora
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    }
    else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
