#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[30];
    char codigo[4]; 
    char cidade[30];
    unsigned long int populacao;
    float area;
    float pib; 
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    double super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // ===== Entrada Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", carta1.codigo);
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

    // Cálculos Carta 1
    if (carta1.area != 0.0f)
        carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    else
        carta1.densidade_populacional = 0.0f;

    if (carta1.populacao != 0UL)
        carta1.pib_per_capita = (carta1.pib * 1e9f) / (float)carta1.populacao;
    else
        carta1.pib_per_capita = 0.0f;

    carta1.super_poder = (double)carta1.populacao + carta1.area +
                         (carta1.pib * 1e9f) + carta1.pontos_turisticos +
                         carta1.pib_per_capita;

    if (carta1.densidade_populacional != 0.0f)
        carta1.super_poder += 1.0f / carta1.densidade_populacional;

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

    // Cálculos Carta 2
    if (carta2.area != 0.0f)
        carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    else
        carta2.densidade_populacional = 0.0f;

    if (carta2.populacao != 0UL)
        carta2.pib_per_capita = (carta2.pib * 1e9f) / (float)carta2.populacao;
    else
        carta2.pib_per_capita = 0.0f;

    carta2.super_poder = (double)carta2.populacao + carta2.area +
                         (carta2.pib * 1e9f) + carta2.pontos_turisticos +
                         carta2.pib_per_capita;

    if (carta2.densidade_populacional != 0.0f)
        carta2.super_poder += 1.0f / carta2.densidade_populacional;

    // ===== Menu Interativo =====
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // ===== Comparações =====
    switch (opcao) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("%s: %lu | %s: %lu\n", carta1.cidade, carta1.populacao, carta2.cidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.cidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.cidade);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.cidade, carta1.area, carta2.cidade, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.cidade);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.cidade);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões | %s: %.2f bilhões\n", carta1.cidade, carta1.pib, carta2.cidade, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.cidade);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.cidade);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", carta1.cidade, carta1.pontos_turisticos, carta2.cidade, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta1.cidade);
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Vencedor: %s\n", carta2.cidade);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.cidade, carta1.densidade_populacional, carta2.cidade, carta2.densidade_populacional);
            if (carta1.densidade_populacional < carta2.densidade_populacional)
                printf("Vencedor: %s\n", carta1.cidade);
            else if (carta2.densidade_populacional < carta1.densidade_populacional)
                printf("Vencedor: %s\n", carta2.cidade);
            else
                printf("Empate!\n");
            break;

        default: // opção inválida
            printf("Opção inválida!\n");
    }

    return 0;
}
