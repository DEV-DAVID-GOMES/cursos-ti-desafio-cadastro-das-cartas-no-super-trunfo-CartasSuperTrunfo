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

  return 0;
}