#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[30];
    char codigo[4]; // Ex: A01
    char cidade[30];
    unsigned long int populacao; // População pode ser bem grande
    float area;
    float pib; // em bilhões
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    double super_poder; // Usando double para mais precisão
};

int main() {
    struct Carta carta1, carta2;

    // ===== Entrada Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", carta1.codigo); // lê no máximo 3 caracteres
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculos Carta 1 (com verificações de divisão por zero)
    if (carta1.area != 0.0f) {
        carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidade_populacional = 0.0f;
        printf("Aviso: Área da Carta 1 é zero.\n");
    }

    if (carta1.populacao != 0UL) {
        carta1.pib_per_capita = (carta1.pib * 1e9f) / (float)carta1.populacao;
    } else {
        carta1.pib_per_capita = 0.0f;
        printf("Aviso: População da Carta 1 é zero.\n");
    }

    carta1.super_poder = (double)carta1.populacao + carta1.area +
                         (carta1.pib * 1e9f) + carta1.pontos_turisticos +
                         carta1.pib_per_capita;

    if (carta1.densidade_populacional != 0.0f) {
        carta1.super_poder += 1.0f / carta1.densidade_populacional;
    }

    // ===== Entrada Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código da carta (ex: B02): ");
    scanf(" %3s", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos Carta 2 (com verificações de divisão por zero)
    if (carta2.area != 0.0f) {
        carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidade_populacional = 0.0f;
        printf("Aviso: Área da Carta 2 é zero.\n");
    }

    if (carta2.populacao != 0UL) {
        carta2.pib_per_capita = (carta2.pib * 1e9f) / (float)carta2.populacao;
    } else {
        carta2.pib_per_capita = 0.0f;
        printf("Aviso: População da Carta 2 é zero.\n");
    }

    carta2.super_poder = (double)carta2.populacao + carta2.area +
                         (carta2.pib * 1e9f) + carta2.pontos_turisticos +
                         carta2.pib_per_capita;

    if (carta2.densidade_populacional != 0.0f) {
        carta2.super_poder += 1.0f / carta2.densidade_populacional;
    }

    // ===== Saída Carta 1 =====
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f R$\n", carta1.pib_per_capita);
    printf("Super Poder: %.2lf\n", carta1.super_poder);

    // ===== Saída Carta 2 =====
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f R$\n", carta2.pib_per_capita);
    printf("Super Poder: %.2lf\n", carta2.super_poder);

    // ===== Comparações =====
    printf("\n=== Comparações ===\n");
    printf("População (C1 > C2): %d\n", carta1.populacao > carta2.populacao);
    printf("Área (C1 > C2): %d\n", carta1.area > carta2.area);
    printf("PIB per capita (C1 > C2): %d\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Densidade Populacional (C1 melhor que C2 - menor é melhor): %d\n",
           carta1.densidade_populacional < carta2.densidade_populacional);
    printf("Super Poder (C1 > C2): %d\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
// Fim do código