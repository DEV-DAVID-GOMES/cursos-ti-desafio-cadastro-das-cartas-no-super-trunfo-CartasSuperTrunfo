#include <stdio.h>

int main() {

    //DADOS DA 1º CARTA
    char estado1[20]; // NOME DO ESTADO: ATÉ 19 CARACTERES
    char codigo1[5]; // CODIGO DA CARTA: STRING DE ATÉ 4 CARACTERES
    char nomeCidade1[20]; // NOME DO ESTADO: ATÉ 19 CARACTERES
    int populacao1; // POPULAÇÃO DA CIDADE
    float area1; // ÁREA DA CIDADE EM KM²
    float pib1; // PRODUTO INTERNO BRUTO DA CIDADE
    int pontosTuristicos1; // QUANTIDADE DE PONTOS TURISTICOS
    char codigoFinal1[10]; // CÓDIGO FINAL CONCATENADO (EX: A01)

    //DADOS DA 2º CARTA
    char estado2[20]; // NOME DO ESTADO: ATÉ 19 CARACTERES
    char codigo2[5]; // CODIGO DA CARTA: STRING DE ATÉ 4 CARACTERES
    char nomeCidade2[20]; // NOME DO ESTADO: ATÉ 19 CARACTERES
    int populacao2; // POPULAÇÃO DA CIDADE
    float area2; // ÁREA DA CIDADE EM KM²
    float pib2; // PRODUTO INTERNO BRUTO DA CIDADE
    int pontosTuristicos2; // QUANTIDADE DE PONTOS TURISTICOS
    char codigoFinal2[10]; // CÓDIGO FINAL CONCATENADO (EX: B03)

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

   
}