#include <stdio.h>

// Estrutura que representa uma carta de país
struct Carta {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

int main() {

    // Cartas já cadastradas (do desafio anterior)
    struct Carta carta1 = {
        "Brasil",
        203000000,
        8515767.0,
        1900000.0,
        15,
        0.0
    };

    struct Carta carta2 = {
        "Argentina",
        46000000,
        2780400.0,
        640000.0,
        10,
        0.0
    };

    // Cálculo da densidade demográfica
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n\n", carta1.pais, carta2.pais);

    switch (opcao) {

        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", carta1.pais, carta1.populacao);
            printf("%s: %d\n", carta2.pais, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n", carta2.pais, carta2.area);

            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", carta1.pais, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.pais, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.pais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (MENOR vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.pais, carta2.densidadeDemografica);

            if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.densidadeDemografica < carta1.densidadeDemografica) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
    }

    return 0;
}
