#include <stdio.h>

int main(){

    //Atributos carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    //Atributos carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    //Solicitacao dos atributos carta 1
    printf("Cadastro dos atributos da carta 1: \n");

    printf("Estado de (A-H): \n");
    scanf("%c", &estado1);

    printf("Código da Carta (ex:A01): \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf ("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Solicitação dos atributos carta 2
    printf("\nCadastro dos atributos da carta 2: \n");

    printf("Estado de (A-H): \n");
    scanf("%s", &estado2);

    printf("Código da carta (ex: B02): \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos atributos da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %d \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);

    //Exibição dos atributos da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %d \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d", pontosTuristicos2);

    return 0;
}