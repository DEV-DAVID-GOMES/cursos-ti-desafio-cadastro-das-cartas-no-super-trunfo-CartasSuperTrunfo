#include <stdio.h>

int main()
{

    // DADOS DA 1º CARTA
    char estado1[20];             // NOME DO ESTADO: ATÉ 19 CARACTERES
    char codigo1[5];              // CODIGO DA CARTA: STRING DE ATÉ 4 CARACTERES
    char nomeCidade1[20];         // NOME DO ESTADO: ATÉ 19 CARACTERES
    int populacao1;               // POPULAÇÃO DA CIDADE
    float area1;                  // ÁREA DA CIDADE EM KM²
    float pib1;                   // PRODUTO INTERNO BRUTO DA CIDADE
    int pontosTuristicos1;        // QUANTIDADE DE PONTOS TURISTICOS
    char codigoFinal1[10];        // CÓDIGO FINAL CONCATENADO (EX: A01)
    float densidadePopulacional1; // DENSIDADE POPULACIONAL DA CIDADE 1
    float pibPerCapita1;          // PIB PER CAPITA DA CIDADE 1
    float superPoder1;            // SUPER PODER DA CIDADE 1

    // DADOS DA 2º CARTA
    char estado2[20];             // NOME DO ESTADO: ATÉ 19 CARACTERES
    char codigo2[5];              // CODIGO DA CARTA: STRING DE ATÉ 4 CARACTERES
    char nomeCidade2[20];         // NOME DO ESTADO: ATÉ 19 CARACTERES
    int populacao2;               // POPULAÇÃO DA CIDADE
    float area2;                  // ÁREA DA CIDADE EM KM²
    float pib2;                   // PRODUTO INTERNO BRUTO DA CIDADE
    int pontosTuristicos2;        // QUANTIDADE DE PONTOS TURISTICOS
    char codigoFinal2[10];        // CÓDIGO FINAL CONCATENADO (EX: B03)
    float densidadePopulacional2; // DENSIDADE POPULACIONAL DA CIDADE 2
    float pibPerCapita2;          // PIB PER CAPITA DA CIDADE 2
    float superPoder2;            // SUPER PODER DA CIDADE 2

    printf("-------------------------------------SUPER TRUNFO-------------------------------------\n");

    // Leitura dos dados da 1º carta
    printf("Cadastro da 1º Carta:\n");

    printf("Digite uma letra de (A a H) para representar o estado: ");
    scanf(" %1s", estado1); // lê uma letra como string

    printf("Digite o Código da Carta (01 a 04): ");
    scanf("%2s", codigo1); // lê até 2 caracteres

    sprintf(codigoFinal1, "%c%s", estado1[0], codigo1); // monta código final (ex: A01)

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1); // nome sem espaços

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da 2º carta
    printf("Cadastro da 2º Carta:\n");

    printf("Digite uma letra de (A a H) para representar o estado: ");
    scanf(" %1s", estado2); // lê uma letra como string

    printf("Digite o Código da Carta (01 a 04): ");
    scanf("%2s", codigo2); // lê até 2 caracteres

    sprintf(codigoFinal2, "%c%s", estado2[0], codigo2); // monta código final (ex: B01)

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2); // nome sem espaços

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder (quanto menor a densidade, maior o poder)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados da 1º carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1[0]);
    printf("Código: %s\n", codigoFinal1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da 2º carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Código: %s\n", codigoFinal2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu\n");
    else if (populacao2 > populacao1)
        printf("População: Carta 2 venceu\n");
    else
        printf("População: Empate\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu\n");
    else if (area2 > area1)
        printf("Área: Carta 2 venceu\n");
    else
        printf("Área: Empate\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu\n");
    else
        printf("PIB: Empate\n");

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu\n");
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turísticos: Carta 2 venceu\n");
    else
        printf("Pontos Turísticos: Empate\n");

    if (densidadePopulacional1 < densidadePopulacional2)
        printf("Densidade Populacional: Carta 1 venceu (menor é melhor)\n");
    else if (densidadePopulacional2 < densidadePopulacional1)
        printf("Densidade Populacional: Carta 2 venceu (menor é melhor)\n");
    else
        printf("Densidade Populacional: Empate\n");

    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu\n");
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 venceu\n");
    else
        printf("PIB per Capita: Empate\n");

    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu\n");
    else if (superPoder2 > superPoder1)
        printf("Super Poder: Carta 2 venceu\n");
    else
        printf("Super Poder: Empate\n");

    // MENU INTERATIVO PARA ESCOLHA DO ATRIBUTO
    int escolha;

    printf("\n---------------- MENU DE COMPARAÇÃO ----------------\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("----------------------------------------------------\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha);

    // Comparação com base no atributo escolhido
    switch (escolha)
    {
    case 1:
        // Comparação de População
        printf("\nComparando População:\n");
        printf("%s: %d habitantes\n", nomeCidade1, populacao1);
        printf("%s: %d habitantes\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: %s venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
        break;

    case 2:
        // Comparação de Área
        printf("\nComparando Área:\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2)
            printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (area2 > area1)
            printf("Resultado: %s venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
        break;

    case 3:
        // Comparação de PIB
        printf("\nComparando PIB:\n");
        printf("%s: R$ %.2f\n", nomeCidade1, pib1);
        printf("%s: R$ %.2f\n", nomeCidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Resultado: %s venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
        break;

    case 4:
        // Comparação de Pontos Turísticos
        printf("\nComparando Pontos Turísticos:\n");
        printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Resultado: %s venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
        break;

    case 5:
        // Comparação de Densidade Demográfica (regra invertida)
        printf("\nComparando Densidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
        printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2)
            printf("Resultado: %s venceu (menor densidade)!\n", nomeCidade1);
        else if (densidadePopulacional2 < densidadePopulacional1)
            printf("Resultado: %s venceu (menor densidade)!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
        break;

    default:
        // Tratamento de entrada inválida
        printf("\nOpção inválida! Por favor, escolha um número de 1 a 5.\n");
        break;
    }

    // MENU DE ESCOLHA DOS ATRIBUTOS
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("\n--- ESCOLHA DOS ATRIBUTOS ---\n");
    printf("Atributos disponíveis:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    // Escolha do primeiro atributo
    do
    {
        printf("Escolha o 1º atributo (1-7): ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 7)
            printf("Opção inválida. Tente novamente.\n");
    } while (atributo1 < 1 || atributo1 > 7);

    // Escolha do segundo atributo (diferente do primeiro)
    do
    {
        printf("Escolha o 2º atributo (diferente do 1º): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7)
            printf("Opção inválida ou repetida. Tente novamente.\n");
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7);

    // Função para obter os valores de cada atributo
    switch (atributo1)
    {
    case 1:
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        break;
    case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;
    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;
    case 4:
        valor1_carta1 = pontosTuristicos1;
        valor1_carta2 = pontosTuristicos2;
        break;
    case 5:
        valor1_carta1 = densidadePopulacional1;
        valor1_carta2 = densidadePopulacional2;
        break;
    case 6:
        valor1_carta1 = pibPerCapita1;
        valor1_carta2 = pibPerCapita2;
        break;
    case 7:
        valor1_carta1 = superPoder1;
        valor1_carta2 = superPoder2;
        break;
    default:
        printf("Erro na seleção do atributo 1.\n");
    }

    switch (atributo2)
    {
    case 1:
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        break;
    case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;
    case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        break;
    case 4:
        valor2_carta1 = pontosTuristicos1;
        valor2_carta2 = pontosTuristicos2;
        break;
    case 5:
        valor2_carta1 = densidadePopulacional1;
        valor2_carta2 = densidadePopulacional2;
        break;
    case 6:
        valor2_carta1 = pibPerCapita1;
        valor2_carta2 = pibPerCapita2;
        break;
    case 7:
        valor2_carta1 = superPoder1;
        valor2_carta2 = superPoder2;
        break;
    default:
        printf("Erro na seleção do atributo 2.\n");
    }

    // Exibição dos valores escolhidos
    printf("\n--- COMPARAÇÃO DOS ATRIBUTOS ---\n");

    // Função para exibir nome dos atributos
    char *getNomeAtributo(int cod)
    {
        switch (cod)
        {
        case 1:
            return "População";
        case 2:
            return "Área";
        case 3:
            return "PIB";
        case 4:
            return "Pontos Turísticos";
        case 5:
            return "Densidade Populacional";
        case 6:
            return "PIB per Capita";
        case 7:
            return "Super Poder";
        default:
            return "Desconhecido";
        }
    }

    printf("Atributo 1 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n", getNomeAtributo(atributo1), valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n", getNomeAtributo(atributo2), valor2_carta1, valor2_carta2);

     // Lógica de comparação
    float soma1 = 0, soma2 = 0;

    // Atributo 1
    if (atributo1 == 5) { // Densidade: quanto menor, melhor
        soma1 += (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2 ? 0 : 0);
        soma2 += (valor1_carta2 < valor1_carta1) ? 1 : (valor1_carta1 == valor1_carta2 ? 0 : 0);
    } else {
        soma1 += (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta1 == valor1_carta2 ? 0 : 0);
        soma2 += (valor1_carta2 > valor1_carta1) ? 1 : (valor1_carta1 == valor1_carta2 ? 0 : 0);
    }

    // Atributo 2
    if (atributo2 == 5) { // Densidade: quanto menor, melhor
        soma1 += (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2 ? 0 : 0);
        soma2 += (valor2_carta2 < valor2_carta1) ? 1 : (valor2_carta1 == valor2_carta2 ? 0 : 0);
    } else {
        soma1 += (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta1 == valor2_carta2 ? 0 : 0);
        soma2 += (valor2_carta2 > valor2_carta1) ? 1 : (valor2_carta1 == valor2_carta2 ? 0 : 0);
    }

}