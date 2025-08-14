#include <stdio.h>
#include <string.h>

struct Carta {

    // Atributos da carta

    char estado[30];
    char codigo[4]; // Ex: A01
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados para a carta 1

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

    // Calculando valores

    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    // Entrada de dados para a carta 2

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

    // Exibindo os dados das cartas

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

    // Exibindo os dados da carta 2

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

    // Fim do programa

    return 0;
}