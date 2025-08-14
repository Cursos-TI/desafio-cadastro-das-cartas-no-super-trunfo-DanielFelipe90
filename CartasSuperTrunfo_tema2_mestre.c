#include <stdio.h>

int main(){

    //Atributos carta 1
    char estado1, codigo1[4], cidade1[50];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1;

    //Atributos carta 2
    char estado2, codigo2[4], cidade2[50];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2;

    //Solicitacao dos atributos carta 1
    printf("Cadastro dos atributos da carta 1: \n");
    printf("Estado de (A-H): \n");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex:A01): \n");
    scanf("%s", codigo1);
    printf("Nome da Cidade: \n");
    scanf(" %49[^\n]", cidade1);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf ("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Solicitação dos atributos carta 2
    printf("\nCadastro dos atributos da carta 2: \n");

    printf("Estado de (A-H): \n");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): \n");
    scanf("%s", codigo2);
    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2); 

    //Variáveis do cálculo da densidade populacional, PIB per capita e Super Poder
    float densidadePopulacional1 = populacao1 / area1, densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 *1e9) / populacao1, pibPerCapita2 = (pib2 *1e9) / populacao2;
    float superPoder1 = populacao1 + area1 + (pib1 *1e9) + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;
    float superPoder2 = populacao2 + area2 + (pib2 *1e9) + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    //Comparação dos Atributos da carta 1 e carta 2
    printf("\nComparação dos atributos das cartas:\n");
    printf("(1 para verdadeiro – Carta 1 vence, e 0 para falso – Carta 2 vence)\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}