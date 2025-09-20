#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1 = 0, resultado2 = 0;
    char primeiroAtributo, segundoAtributo;

    // Carta 1 - São Paulo
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    double pib1 = 699.28; 
    float densidade1 = populacao1 / area1;
    double pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2 - Rio de Janeiro
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6718903;
    float area2 = 1200.25;
    double pib2 = 364.00; 
    float densidade2 = populacao2 / area2;
    double pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Valores
    double valor1_carta1 = 0, valor1_carta2 = 0;
    double valor2_carta1 = 0, valor2_carta2 = 0;

    // início do jogo
    printf("### Bem-vindo ao Super Trunfo! ###\n\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Densidade Populacional\n");
    printf("E. PIB Per Capita\n");

    printf("Opção: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case 'A': 
        case 'a':
            printf("Você escolheu População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            valor1_carta1 = populacao1; valor1_carta2 = populacao2;
            break;
        case 'B': 
        case 'b':
            printf("Você escolheu Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            valor1_carta1 = area1; valor1_carta2 = area2;
            break;
        case 'C': 
        case 'c':
            printf("Você escolheu PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            valor1_carta1 = pib1; valor1_carta2 = pib2;
            break;
        case 'D': 
        case 'd':
            printf("Você escolheu Densidade Populacional!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            valor1_carta1 = densidade1; valor1_carta2 = densidade2;
            break;
        case 'E': 
        case 'e':
            printf("Você escolheu PIB Per Capita!\n");
            resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Densidade Populacional\n");
    printf("E. PIB Per Capita\n");

    printf("Opção: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo!\n");
        return 0;
    }

    switch (segundoAtributo) {
        case 'A': 
        case 'a':
            printf("Você escolheu População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            valor2_carta1 = populacao1; valor2_carta2 = populacao2;
            break;
        case 'B': 
        case 'b':
            printf("Você escolheu Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            valor2_carta1 = area1; valor2_carta2 = area2;
            break;
        case 'C': 
        case 'c':
            printf("Você escolheu PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            valor2_carta1 = pib1; valor2_carta2 = pib2;
            break;
        case 'D': 
        case 'd':
            printf("Você escolheu Densidade Populacional!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            valor2_carta1 = densidade1; valor2_carta2 = densidade2;
            break;
        case 'E': 
        case 'e':
            printf("Você escolheu PIB Per Capita!\n");
            resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // soma dos atributos
    double soma1 = valor1_carta1 + valor2_carta1;
    double soma2 = valor1_carta2 + valor2_carta2;

    // exibição 
    printf("\n### Resultado ###\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n\n", cidade2);

    printf("Atributo 1  %s: %.2f - %s: %.2f\n", cidade1, valor1_carta1, cidade2, valor1_carta2);
    printf("Atributo 2  %s: %.2f - %s: %.2f\n\n", cidade1, valor2_carta1, cidade2, valor2_carta2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("Resultado Final: %s venceu! \n", cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado Final: %s venceu! \n", cidade2);
    } else {
        printf("Resultado Final: Empate! \n");
    }

    return 0;
}