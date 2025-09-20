#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;// habitantes
    float area1 = 1521.11; // km²
    double pib1 = 699.28; // bilhões
    int pontosTuristicos1 = 50;

    // Carta 2 - Rio de Janeiro
    char estado2[] = "RJ";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6718903; // habitantes
    float area2 = 1200.25; // km²
    double pib2 = 364.00; // bilhões
    int pontosTuristicos2 = 35;

    // Cálculos extras
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    double pibPerCapita1 = (pib1 * 1000000000) / populacao1; 
    double pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu para o usuário escolher o atributo
    int atributoEscolhido;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB Per Capita\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &atributoEscolhido);

    printf("\n");

    switch (atributoEscolhido) {
        case 1: // População
            printf("Comparacao de cartas (Atributo: Populacao)\n\n");
            printf("Carta 1 - %s (%s): %d mihlões de habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d mihlões de habitantes\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparacao de cartas (Atributo: Area)\n\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        case 3: // PIB
            printf("Compração de cartas (Atributo: PIB)\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("\n### Resultado: Carta 1 (%s) venceu! ###\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\n### Resultado: Carta 2 (%s) venceu! ###\n", cidade2);
            } else {
                printf("\n### Resultado: Empate! ###\n");
            }

            break;

        case 4: // Densidade populacional (menor vence)
            printf("Comparacao de cartas (Atributo: Densidade Populacional)\n\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("\n### Resultado: Carta 1 (%s) venceu! ###\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\n### Resultado: Carta 2 (%s) venceu! ###\n", cidade2);
            } else {
                printf("\n### Resultado: Empate! ###\n");
            }
            break;

        case 5: // PIB per capita
            printf("Comparacao de cartas (Atributo: PIB per capita)\n\n");
            printf("Carta 1 - %s (%s): %.2f R$ por habitante\n", cidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f R$ por habitante\n", cidade2, estado2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2) {
                printf("\n### Resultado: Carta 1 (%s) venceu! ###\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("\n### Resultado: Carta 2 (%s) venceu! ###\n", cidade2);
            } else {
                printf("\n### Resultado: Empate! ###\n");
            }

            break;

        default:
            printf("### Opção invalida! ###\n");
            break;
    }

    return 0;
}