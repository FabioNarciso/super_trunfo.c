#include <stdio.h>
#include <string.h>

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

    // ======= Entrada da primeira carta =======
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf("%3s", codigo1);

    getchar(); // limpar buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ======= Entrada da segunda carta =======
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (Ex: B02): ");
    scanf("%3s", codigo2);

    getchar(); // limpar buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ======= Exibição formatada =======
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao1 / area1);
    printf("PIB per Capita: %.2f reais\n", (pib1 * 1000000000) / populacao1);

    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n", (pib2 * 1000000000) / populacao2);

    return 0;
}
