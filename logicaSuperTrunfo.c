#include <stdio.h>

int main(){
    // Carta 1 - São Paulo
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;        // habitantes
    float area1 = 1521.11;            // km²
    double pib1 = 699.28;             // bilhões
    int pontosTuristicos1 = 50;

    // Carta 2 - Rio
    char estado2[] = "RJ";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6718903;         // habitantes
    float area2 = 1200.25;            // km²
    double pib2 = 364.00;             // bilhões
    int pontosTuristicos2 = 35;

    //Calculos cartas 1 e 2
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else (populacao2 > populacao1); 
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    return 0;
}