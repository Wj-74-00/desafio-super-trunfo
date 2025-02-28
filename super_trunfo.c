#include <stdio.h>
// Atividade de desenvolvimento de jogo de cartas.
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    // Declaração das variáveis
    char nomedopais1[20], nomedopais2[20];
    char nomedoestado1[20], nomedoestado2[20];
    char nomedacidade1[20], nomedacidade2[20];
    char codigodoestado1[1], codigodoestado2[1];
    char codigodacidade1[2], codigodacidade2[2];
    char codigodacarta1[3], codigodacarta2[3];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2, pibpercap1, pibpercap2;
    float densidade1, densidade2;

    // Entrada e saída de dados da primeira carta com as funções scanf e printf.
    printf("Dados da Carta 1:\n");

    printf("Digite o nome do país:\n");
    scanf("%s", &nomedopais1);

    printf("Digite o nome do estado:\n");
    scanf(" %s", &nomedoestado1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomedacidade1);

    printf("Digite o código do estado:\n");
    scanf(" %s", &codigodoestado1);

    printf("Digite o código da cidade:\n");
    scanf(" %s", &codigodacidade1);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf(" %s", &codigodacarta1);

    printf("Digite a quantidada da população:\n");
    scanf(" %d", &populacao1);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf(" %d", &pontosturisticos1);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    // Cálculo da densidade populacional da carta 1.
    densidade1 = populacao1 / area1;

    // Cálculo do PIB per Capita da carta 1.
    pibpercap1 = pib1 / populacao1;

    printf("\n");

    // Entrada e saída de dados da segunda carta com as funções scanf e printf.
    printf("Dados da Carta 2:\n");

    printf("Digite o nome do país:\n");
    scanf("%s", &nomedopais2);

    printf("Digite o nome do estado:\n");
    scanf(" %s", &nomedoestado2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomedacidade2);

    printf("Digite o código do estado:\n");
    scanf(" %s", &codigodoestado2);

    printf("Digite o código da cidade:\n");
    scanf(" %s", &codigodacidade2);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf(" %s", &codigodacarta2);

    printf("Digite a quantidada da população:\n");
    scanf(" %d", &populacao2);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf(" %d", &pontosturisticos2);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    // Cálculo da densidade populacional da carta 2.
    densidade2 = populacao2 / area2;

    // Cálculo do PIB per Capita da carta 1.
    pibpercap2 = pib2 / populacao2;

    printf("\n");

    // Impressão das informações recebidas da carta 1.
    printf("Carta 1:\n");
    printf("Nome do país: %s\n", nomedopais1);
    printf("Nome do estado: %s\nNome da cidade: %s\n", nomedoestado1, nomedacidade1);
    printf("Código do estado: %s\nCódigo da cidade: %s\n", codigodoestado1, codigodacidade1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Quantidade populacional: %d habitantes\nQuantidade de pontos turísticos: %d\n", populacao1, pontosturisticos1);
    printf("Área da cidade: %.2f km²\nPIB da cidade: %.2f bilhões de reais\n", area1, pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("\n");

    // Impressão das informações recebidas da carta 2.
    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nomedopais2);
    printf("Nome do estado: %s\nNome da cidade: %s\n", nomedoestado2, nomedacidade2);
    printf("Código do estado: %s\nCódigo da cidade: %s\n", codigodoestado2, codigodacidade2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Quantidade populacional: %d habitantes\nQuantidade de pontos turísticos: %d\n", populacao2, pontosturisticos2);
    printf("Área da cidade: %.2f km²\nPIB da cidade: %.2f bilhões de reais\n", area2, pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);
    printf("\n");

    return 0;
}