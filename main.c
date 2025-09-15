#include <stdio.h>

int main() {

    //Carta 1
    char estado_carta1;
    char codigo_carta1[4];
    char nome_cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int numero_pontos_turisticos_carta1;

    //Carta 2
    char estado_carta2;
    char codigo_carta2[4];
    char nome_cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int numero_pontos_turisticos_carta2;

    printf("Digite estado da primeira carta (Letra de A a H):\n");
    scanf(" %c", &estado_carta1);

    printf("Digite o código da primeira carta (Estado + um número de 01 a 04):\n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome_cidade_carta1);

    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao_carta1);

    printf("Digite a área da primeira carta:\n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &numero_pontos_turisticos_carta1);

    //Carta 2
    printf("Digite estado da segunda carta:\n");
    scanf(" %c", &estado_carta2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome_cidade_carta2);

    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área da segunda carta:\n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &numero_pontos_turisticos_carta2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1); 
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_carta1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_carta2);
}