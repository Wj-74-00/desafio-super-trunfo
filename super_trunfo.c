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
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2, pibpercap1, pibpercap2;
    float densidade1, densidade2;
    float superpoder1, superpoder2;
    int atributo;

    // Entrada e saída de dados da primeira carta com as funções scanf e printf.
    printf("Dados da Carta 1:\n");

    printf("Digite o nome do país:\n");
    scanf(" %s", nomedopais1);

    printf("Digite o nome do estado:\n");
    scanf(" %s", nomedoestado1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomedacidade1);

    printf("Digite o código do estado:\n");
    scanf(" %s", codigodoestado1);

    printf("Digite o código da cidade:\n");
    scanf(" %s", codigodacidade1);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf(" %s", codigodacarta1);

    printf("Digite a quantidada da população:\n");
    scanf(" %lu", &populacao1);

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

    // Cálculo do super poder da carta 1.
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercap1 + (1 / densidade1);

    printf("\n"); // Salta uma linha.

    // Impressão das informações recebidas da carta 1.
    printf("Carta 1:\n");
    printf("Nome do país: %s\n", nomedopais1);
    printf("Nome do estado: %s\nNome da cidade: %s\n", nomedoestado1, nomedacidade1);
    printf("Código do estado: %s\nCódigo da cidade: %s\n", codigodoestado1, codigodacidade1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Quantidade populacional: %lu habitantes\nQuantidade de pontos turísticos: %d\n", populacao1, pontosturisticos1);
    printf("Área da cidade: %.2f km²\nPIB da cidade: %.2f bilhões de reais\n", area1, pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f reais\n", pibpercap1);
    printf("Super Poder: %.4f\n", superpoder1);
    printf("\n"); // Salta uma linha.

    // Entrada e saída de dados da segunda carta com as funções scanf e printf.
    printf("Dados da Carta 2:\n");

    printf("Digite o nome do país:\n");
    scanf(" %s", nomedopais2);

    printf("Digite o nome do estado:\n");
    scanf(" %s", nomedoestado2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomedacidade2);

    printf("Digite o código do estado:\n");
    scanf(" %s", codigodoestado2);

    printf("Digite o código da cidade:\n");
    scanf(" %s", codigodacidade2);

    printf("Digite o código da carta (código do estado + código da cidade):\n");
    scanf(" %s", codigodacarta2);

    printf("Digite a quantidada da população:\n");
    scanf(" %lu", &populacao2);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf(" %d", &pontosturisticos2);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    // Cálculo da densidade populacional da carta 2.
    densidade2 = populacao2 / area2;

    // Cálculo do PIB per Capita da carta 2.
    pibpercap2 = pib2 / populacao2;

    // Cálculo do super poder da carta 2.
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercap2 + (1 / densidade2);
    printf("\n"); // Salta uma linha.

    // Impressão das informações recebidas da carta 2.
    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nomedopais2);
    printf("Nome do estado: %s\nNome da cidade: %s\n", nomedoestado2, nomedacidade2);
    printf("Código do estado: %s\nCódigo da cidade: %s\n", codigodoestado2, codigodacidade2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Quantidade populacional: %lu habitantes\nQuantidade de pontos turísticos: %d\n", populacao2, pontosturisticos2);
    printf("Área da cidade: %.2f km²\nPIB da cidade: %.2f bilhões de reais\n", area2, pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f reais\n", pibpercap2);
    printf("Super Poder: %.4f\n", superpoder2);
    printf("\n"); // Salta uma linha.

    // Comparação das cartas.
    printf("Comparação das cartas.\n\n");

    printf("Escolha um atributo para comparar:\n");
    printf("1.População\n");
    printf("2.Pontos Turísticos\n");
    printf("3.Área\n");
    printf("4.PIB\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n\n");
    scanf("%d", &atributo);
    printf("\n"); // Salta uma linha.

    switch (atributo) // Menu para escolha do atributo a ser comparado.
    {
    case 1:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: População\n");
        if (populacao1 > populacao2)
        {
            printf("Carta 1 - %s: %lu\n", nomedoestado1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomedoestado2, populacao2);
            printf("Carta 1 venceu!\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 1 - %s: %lu\n", nomedoestado1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomedoestado2, populacao2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %lu\n", nomedoestado1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomedoestado2, populacao2);
            printf("Empatou!\n");
        }
        break;
    case 2:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: Pontos Turísticos\n");
        if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Carta 1 - %s: %d\n", nomedoestado1, pontosturisticos1);
            printf("Carta 2 - %s: %d\n", nomedoestado2, pontosturisticos2);
            printf("Carta 1 venceu!\n");
        }
        else if (pontosturisticos1 < pontosturisticos2)
        {
            printf("Carta 1 - %s: %d\n", nomedoestado1, pontosturisticos1);
            printf("Carta 2 - %s: %d\n", nomedoestado2, pontosturisticos2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %d\n", nomedoestado1, pontosturisticos1);
            printf("Carta 2 - %s: %d\n", nomedoestado2, pontosturisticos2);
            printf("Empatou!\n");
        }
        break;
    case 3:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: Área da Cidade\n");
        if (area1 > area2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, area1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, area2);
            printf("Carta 1 venceu!\n");
        }
        else if (area1 < area2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, area1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, area2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, area1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, area2);
            printf("Empatou!\n");
        }
        break;
    case 4:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: PIB\n");
        if (pib1 > pib2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pib2);
            printf("Carta 1 venceu!\n");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pib2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pib2);
            printf("Empatou!\n");
        }
        break;
    case 5:
        printf("%s vs %s\n ", nomedopais1, nomedopais2);
        printf("Atributo selecionado: Densidade Populacional\n");
        if (densidade1 < densidade2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, densidade2);
            printf("Carta 1 venceu!\n");
        }
        else if (densidade1 > densidade2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, densidade2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, densidade2);
            printf("Empatou!\n");
        }
        break;
    case 6:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: PIB Per Capita\n");
        if (pibpercap1 > pibpercap2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pibpercap1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pibpercap2);
            printf("Carta 1 venceu!\n");
        }
        else if (pibpercap1 < pibpercap2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pibpercap1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pibpercap2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, pibpercap1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, pibpercap2);
            printf("Empatou!\n");
        }
        break;
    case 7:
        printf(" %s vs %s\n", nomedopais1, nomedopais2);
        printf("Atributo selecionado: Super Poder\n");
        if (superpoder1 > superpoder2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, superpoder1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, superpoder2);
            printf("Carta 1 venceu!\n");
        }
        else if (superpoder1 < superpoder2)
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, superpoder1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, superpoder2);
            printf("Carta 2 venceu!\n");
        }
        else
        {
            printf("Carta 1 - %s: %.2f\n", nomedoestado1, superpoder1);
            printf("Carta 2 - %s: %.2f\n", nomedoestado2, superpoder2);
            printf("Empatou!\n");
        }
        break;
    default:
        printf("Opção inválida, digite outra opção!\n");
        break;
    }

    printf("\n"); // Salta uma linha.

    return 0;
}