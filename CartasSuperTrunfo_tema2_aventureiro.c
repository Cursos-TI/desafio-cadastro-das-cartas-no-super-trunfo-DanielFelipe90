#include <stdio.h>

int main()
{

    // Variáveis Atributos da carta 1
    char estado1, codigo1[4], cidade1[50];
    int pontosTuristicos1,populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    // Variáveis Atributos da carta 2
    char estado2, codigo2[4], cidade2[50];
    int pontosTuristicos2,populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Solicitacao dos atributos carta 1
    printf("Cadastre os atributos da carta 1: \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex:A01): \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Solicitação dos atributos carta 2
    printf("\nCadastre os atributos da carta 2: \n");
    printf("Digite o Estado de (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite Código da Carta (ex: B02): \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nAtributos das Cartas\n");
    
    // Exibição dos atributos da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %d.\n", estado1);
    printf("Código: %s.\n", codigo1);
    printf("Cidade: %s.\n", cidade1);
    printf("População: %d habitantes.\n", populacao1);
    printf("Área: %.2f km².\n", area1);
    printf("PIB %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos turísticos: %d.\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km².\n", densidadePopulacional1 = populacao1 / area1);
    printf("\nPIB Per Capita: R$ %.2f/habitante.\n", (pib1 * 1e9) / populacao1);

    // Exibição dos atributos da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c.\n", estado2);
    printf("Código: %s.\n", codigo2);
    printf("Cidade: %s.\n", cidade2);
    printf("População: %d habitantes.\n", populacao2);
    printf("Área: %.2f km².\n", area2);
    printf("PIB %.2f bilhões de reais.\n", pib2);
    printf("Número de pontos turísticos: %d.\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km².\n", densidadePopulacional2 = populacao2 / area2);
    printf("PIB Per Capita : R$ %.2f/habitante.\n", pibPerCapita2 = (pib2 * 1e9) / populacao2);

    return 0;
}