#include <stdio.h>

typedef struct {
    char cidade[50];       // Nome da cidade
    int populacao;         // População
    float area;            // Área
    float pib;             // PIB
    int pontos_turisticos; // Número de pontos turísticos
} Carta;
    // Função genérica para entrada de dados
void cadastrarCarta(Carta *carta, int numero) {
    printf("\nCadastro da carta %d\n", numero);
    printf("Digite o nome da Cidade: ");
    scanf(" %49[^\n]", carta->cidade); // lê até 49 chars com espaços
    printf("Digite a populacao: ");
    scanf("%d", &carta->populacao);
    printf("Digite a area: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
}
    // Função genérica para exibir dados
void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d: %s\n", numero, carta.cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turisticos: %d\n", carta.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    printf("\n--- Dados cadastrados ---\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
