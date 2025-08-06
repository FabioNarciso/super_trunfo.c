#include <stdio.h>
#include <string.h> // Para usar strcspn

int main() {
    // ================= CARTA 1 =================
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // ================= CARTA 2 =================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // =======  Primeira carta =======
    printf("Digite o estado da primeira carta (Ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira carta (Ex: A01): ");
    scanf("%s", codigo1);
    getchar(); // consome o ENTER

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // Para ler nomes com espaços
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // ======= Segunda carta =======
    printf("\nDigite o estado da segunda carta (Ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta (Ex: B02): ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;

}

