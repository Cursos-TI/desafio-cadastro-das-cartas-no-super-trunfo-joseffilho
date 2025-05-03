#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis da carta 1
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[50];
    int populacaoCidadeCarta1;
    float areaEmKmCidadeCarta1;
    float pibCidadeCarta1;
    int pontosTuristicosCidadeCarta1;
    float densidadePopulacionalCarta1;
    float pibPerCapitaCarta1;

    // Variáveis da carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[50];
    int populacaoCidadeCarta2;
    float areaEmKmCidadeCarta2;
    float pibCidadeCarta2;
    int pontosTuristicosCidadeCarta2;
    float densidadePopulacionalCarta2;
    float pibPerCapitaCarta2;

    // Entrada dos dados para a carta 1
    printf("Insira os dados para a carta 1:\n");
    printf("Estado (Uma letra de A a H): ");
    scanf("%c", &estadoCarta1);
    printf("Código (De 01 a 04): ");
    scanf("%s", &codigoCarta1);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidadeCarta1);
    printf("População: ");
    scanf("%d", &populacaoCidadeCarta1);
    printf("Área (km²): ");
    scanf("%f", &areaEmKmCidadeCarta1);
    printf("PIB: ");
    scanf("%f", &pibCidadeCarta1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCidadeCarta1);

    // Cálculo da densidade populacional e pib per capita para carta 1
    densidadePopulacionalCarta1 = populacaoCidadeCarta1 / areaEmKmCidadeCarta1;
    pibPerCapitaCarta1 = pibCidadeCarta1 / populacaoCidadeCarta1;

    // Calculo do super poder da carta 1
    float inversoDensidadeCarta1 = 1 / densidadePopulacionalCarta1;
    float superPoderCarta1 = (float)populacaoCidadeCarta1 + areaEmKmCidadeCarta1 + pibCidadeCarta1 + (float)pontosTuristicosCidadeCarta1 + inversoDensidadeCarta1 + pibPerCapitaCarta1;

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCidadeCarta1);
    printf("Área: %.2f km²\n", areaEmKmCidadeCarta1);
    printf("PIB: %.2f de reais\n", pibCidadeCarta1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosCidadeCarta1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f\n", pibPerCapitaCarta1);


    // Entrada dos dados para a carta 2
    printf("\nInsira os dados para a carta 2:\n");
    printf("Estado (Uma letra de A a H): ");
    scanf(" %c", &estadoCarta2);
    printf("Código (De 01 a 04): ");
    scanf("%s", &codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidadeCarta2);
    printf("População: ");
    scanf("%d", &populacaoCidadeCarta2);
    printf("Área (km²): ");
    scanf("%f", &areaEmKmCidadeCarta2);
    printf("PIB: ");
    scanf("%f", &pibCidadeCarta2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCidadeCarta2);

    // Cálculo da densidade populacional e pib per capita para carta 2
    densidadePopulacionalCarta2 = populacaoCidadeCarta2 / areaEmKmCidadeCarta2;
    pibPerCapitaCarta2 = pibCidadeCarta2 / populacaoCidadeCarta2;

    // Calculo do super poder da carta 2
    float inversoDensidadeCarta2 = 1 / densidadePopulacionalCarta2;
    float superPoderCarta2 = (float)populacaoCidadeCarta2 + areaEmKmCidadeCarta2 + pibCidadeCarta2 + (float)pontosTuristicosCidadeCarta2 + inversoDensidadeCarta2 + pibPerCapitaCarta2;

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %c%s\n", estadoCarta2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCidadeCarta2);
    printf("Área: %.2f km²\n", areaEmKmCidadeCarta2);
    printf("PIB: %.2f de reais\n", pibCidadeCarta2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosCidadeCarta2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f\n", pibPerCapitaCarta2);

    // Exibindo o resultado da comparação das cartas
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s: %d\n", nomeCidadeCarta1, populacaoCidadeCarta1);
    printf("Carta 2 - %s: %d\n", nomeCidadeCarta2, populacaoCidadeCarta2);

    // Comparação
    if (populacaoCidadeCarta1 > populacaoCidadeCarta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeCarta1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeCarta2);
    }

    return 0;
}
