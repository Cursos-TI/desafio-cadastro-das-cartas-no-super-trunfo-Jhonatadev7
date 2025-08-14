#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[30];
    char codigo[4]; // Ex: A01
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf(" %s", carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib_per_capita + 
                         ((1 / carta1.densidade_populacional) * carta1.pontos_turisticos);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código da carta (ex: B02): ");
    scanf(" %s", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib_per_capita + 
                         ((1 / carta2.densidade_populacional) * carta2.pontos_turisticos);

    // Exibindo CARTA 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f R$\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    // Exibindo CARTA 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f R$\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparações (1 = Verdadeiro, 0 = Falso)
    printf("\n=== Comparações ===\n");
    printf("População (C1 > C2): %d\n", carta1.populacao > carta2.populacao);
    printf("Área (C1 > C2): %d\n", carta1.area > carta2.area);
    printf("PIB per capita (C1 > C2): %d\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Densidade Populacional (C1 melhor que C2 - menor é melhor): %d\n", carta1.densidade_populacional < carta2.densidade_populacional);
    printf("Super Poder (C1 > C2): %d\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
