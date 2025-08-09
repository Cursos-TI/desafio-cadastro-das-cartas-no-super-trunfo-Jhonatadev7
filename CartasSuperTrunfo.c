#include <stdio.h>

int main() {    

    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontoTuristico;

   // Prenchemento de DADOS.
    printf("Cidade:\n");
    scanf(" %[^\n]", Cidade);

    printf("População:\n");
    scanf("%d", &Populacao);

    printf("Área:\n");
    scanf("%f", &Area);

    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Ponto Turístico:\n");
    scanf("%d", &PontoTuristico);

    // Mostrar dados das CARTAS
    printf("\nCARTAS DE USUARIO #1\n");
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Ponto Turístico: %d\n", PontoTuristico);

    return 0;
}

