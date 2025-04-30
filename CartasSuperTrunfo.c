#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis da carta 1
    char estado_carta_1;
    char codigo_carta_1[4];
    char nome_cidade_carta_1[50];
    int populacao_cidade_carta_1;
    float area_em_km_cidade_carta_1;
    float pib_cidade_carta_1;
    int pontos_turisticos_cidade_carta_1;

    // Variáveis da carta 2
    char estado_carta_2;
    char codigo_carta_2[4];
    char nome_cidade_carta_2[50];
    int populacao_cidade_carta_2;
    float area_em_km_cidade_carta_2;
    float pib_cidade_carta_2;
    int pontos_turisticos_cidade_carta_2;

    // Entrada dos dados para a carta 1
    printf("Insira os dados para a carta 1:\n");
    printf("Estado (Uma letra de A a H): ");
    scanf("%c", &estado_carta_1);
    printf("Código (De 01 a 04): ");
    scanf("%s", &codigo_carta_1);
    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade_carta_1);
    printf("População: ");
    scanf("%d", &populacao_cidade_carta_1);
    printf("Área (km²): ");
    scanf("%f", &area_em_km_cidade_carta_1);
    printf("PIB: ");
    scanf("%f", &pib_cidade_carta_1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_cidade_carta_1);

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta_1);
    printf("Código: %c%s\n", estado_carta_1, codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta_1);
    printf("População: %d\n", populacao_cidade_carta_1);
    printf("Área: %.2f km²\n", area_em_km_cidade_carta_1);
    printf("PIB: %.2f de reais\n", pib_cidade_carta_1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_cidade_carta_1);


    // Entrada dos dados para a carta 2
    printf("\nInsira os dados para a carta 2:\n");
    printf("Estado (Uma letra de A a H): ");
    scanf(" %c", &estado_carta_2);
    printf("Código (De 01 a 04): ");
    scanf("%s", &codigo_carta_2);
    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade_carta_2);
    printf("População: ");
    scanf("%d", &populacao_cidade_carta_2);
    printf("Área (km²): ");
    scanf("%f", &area_em_km_cidade_carta_2);
    printf("PIB: ");
    scanf("%f", &pib_cidade_carta_2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_cidade_carta_2);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta_2);
    printf("Código: %c%s\n", estado_carta_2, codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta_2);
    printf("População: %d\n", populacao_cidade_carta_2);
    printf("Área: %.2f km²\n", area_em_km_cidade_carta_2);
    printf("PIB: %.2f de reais\n", pib_cidade_carta_2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_cidade_carta_2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
