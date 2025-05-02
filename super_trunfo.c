#include <stdio.h>
// Atividade de desenvolvimento de jogo de cartas.
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das cartas.

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
    int atributo1, atributo2;
    float somaatributos1, somaatributos2;
    int resultado1, resultado2;
    float carta1escolha1, carta1escolha2, carta2escolha1, carta2escolha2;

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

    // Menu para a escolha do primeiro atributo.
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1.População\n");
    printf("2.Pontos Turísticos\n");
    printf("3.Área\n");
    printf("4.PIB\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n\n");
    scanf("%d", &atributo1);
    printf("\n"); // Salta uma linha.

    switch (atributo1) // Controle de escolha do primeiro atributo a ser comparado.
    {
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        carta1escolha1 = populacao1;
        carta2escolha1 = populacao2;
        break;
    case 2:;
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        carta1escolha1 = pontosturisticos1;
        carta2escolha1 = pontosturisticos2;
        break;
    case 3:
        resultado1 = area1 > area2 ? 1 : 0;
        carta1escolha1 = area1;
        carta2escolha1 = area2;
        break;
    case 4:
        resultado1 = pib1 > pib2 ? 1 : 0;
        carta1escolha1 = pib1;
        carta2escolha1 = pib2;
        break;
    case 5:
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        carta1escolha1 = densidade1;
        carta2escolha1 = densidade2;
        break;
    case 6:
        resultado1 = pibpercap1 > pibpercap2 ? 1 : 0;
        carta1escolha1 = pibpercap1;
        carta2escolha1 = pibpercap2;
        break;
    case 7:
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        carta1escolha1 = superpoder1;
        carta2escolha1 = superpoder2;
        break;
    default:
        printf("Opção inválida, digite outra opção!\n\n");
        break;
    }

    // Menu para a escolha do segundo atributo.
    printf("Escolha o segundo atributo para comparar:\n");
    printf("1.População\n");
    printf("2.Pontos Turísticos\n");
    printf("3.Área\n");
    printf("4.PIB\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n\n");
    scanf("%d", &atributo2);
    printf("\n"); // Salta uma linha.

    if (atributo1 != atributo2) // Condição para seleção do segunda atributo.
    {

        switch (atributo2) // Controle de escolha do segundo atributo a ser comparado.
        {
        case 1:
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            carta1escolha2 = populacao1;
            carta2escolha2 = populacao2;
            break;
        case 2:
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            carta1escolha2 = pontosturisticos1;
            carta2escolha2 = pontosturisticos2;
            break;
        case 3:
            resultado2 = area1 > area2 ? 1 : 0;
            carta1escolha2 = area1;
            carta2escolha2 = area2;
            break;
        case 4:
            resultado2 = pib1 > pib2 ? 1 : 0;
            carta1escolha2 = pib1;
            carta2escolha2 = pib2;
            break;
        case 5:
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            carta1escolha2 = densidade1;
            carta2escolha2 = densidade2;
            break;
        case 6:
            resultado2 = pibpercap1 > pibpercap2 ? 1 : 0;
            carta1escolha2 = pibpercap1;
            carta2escolha2 = pibpercap2;
            break;
        case 7:
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            carta1escolha2 = superpoder1;
            carta2escolha2 = superpoder2;
            break;
        default:
            printf("Opção inválida, digite outra opção!\n\n");
            break;
        }
        // Soma dos dois atributos de cada carta.
        somaatributos1 = carta1escolha1 + carta1escolha2; // Soma da Carta1.
        somaatributos2 = carta2escolha1 + carta2escolha2; // Soma da carta2.

        printf("Confronto %s vs ",nomedopais1);
        printf("%s\n\n",nomedopais2);

        // Imprimir primeiro atributo
        if (atributo1 == 1)
        {
            printf("População:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else if (atributo1 == 2)
        {
            printf("Pontos-Turísticos:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else if (atributo1 == 3)
        {
            printf("Área-da-Cidade:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else if (atributo1 == 4)
        {
            printf("PIB:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else if (atributo1 == 5)
        {
            printf("Densidade-Populacional:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else if (atributo1 == 6)
        {
            printf("PIB-Per-Capita:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }
        else
        {
            printf("Super-Poder:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha1);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha1);
        }

        // Imprimir segundo atributo
        if (atributo2 == 1)
        {
            printf("População:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else if (atributo2 == 2)
        {
            printf("Pontos-Turísticos:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else if (atributo2 == 3)
        {
            printf("Área-da-Cidade:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else if (atributo2 == 4)
        {
            printf("PIB:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else if (atributo2 == 5)
        {
            printf("Densidade-Populacional:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else if (atributo2 == 6)
        {
            printf("PIB-Per-Capita:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }
        else
        {
            printf("Super-Poder:\n");
            printf("Carta 1 %s = %2.f\n",nomedacidade1, carta1escolha2);
            printf("Carta 2 %s = %2.f\n\n",nomedacidade2, carta2escolha2);
        }

        if (resultado1 == 1 && resultado2 == 1) // Condição que verifica se carta1 venceu.
        {
            printf("Total Carta 1: %2.f\n", somaatributos1);
            printf("Total Carta 2: %2.f\n\n", somaatributos2);
            printf("Carta 1 venceu!\n");
        }
        else if (resultado1 == 0 && resultado2 == 0) // Condição que verifica se carta2 vence.
        {
            printf("Total Carta 1: %2.f\n", somaatributos1);
            printf("Total Carata 2: %2.f\n\n", somaatributos2);
            printf("Carta 2 venceu!\n");
        }
        else// condição que verifica se houve empate
        {
            printf("Total Carta 1: %2.f\n", somaatributos1);
            printf("Total Carta 2: %2.f\n\n", somaatributos2);
            printf("Empatou!\n");
        }
    }
    else // Coso os dois atributos sejam iguais.
    {
        printf("Atributo já selecionado, escolha outra opção!\n");
    }

    printf("\n"); // Salta uma linha.

    return 0;
}