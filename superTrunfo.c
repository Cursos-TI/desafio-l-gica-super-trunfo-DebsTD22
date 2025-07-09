#include <stdio.h>

int main(){
    // Resolvendo desafio nivel novato do SuperTrunfo

    // declaração das variaveis da primeira carta
    char estado_1;
    char codCarta_1[4];
    char nomeCidade_1[100];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTurist_1;
    float dencidadePopulacional_1;
    float pibPerCapita_1;

    // declaração das variaveis da segunda carta
    char estado_2;
    char codCarta_2[4];
    char nomeCidade_2[100];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTurist_2;
    float dencidadePopulacional_2;
    float pibPerCapita_2;
    
    // recebendo os dados da primeira carta
    printf("--------------------------------------------- \n");
    printf(">>>>> Digite os dados da primeira carta <<<<< \n");
    printf("--------------------------------------------- \n");

    printf("Digite o estado da carta (Ex.:'A' ate 'H'): ");
    scanf(" %c", &estado_1); // recebendo o estado 

    printf("Digite o codigo da carta (Ex.: A01): ");
    scanf("%s", &codCarta_1); // recebendo o codigo da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade_1); // recebendo o nome, podendo usar nome que contem espaço

    printf("Qual a população: ");
    scanf("%d", &populacao_1); // recebendo a quantidade da população 

    printf("Sua área total: ");
    scanf("%f", &area_1); // recebendo área total da cidade

    printf("O PIB dessa cidade: ");
    scanf("%f", &pib_1); // recebendo o PIB

    printf("Quantos pontos turisticos tem a cidade: "); 
    scanf("%d", &pontosTurist_1); // Recebendo quantidade de pontos turisticos

    // recebendo os dados da segunda carta
    printf("-------------------------------------------- \n");
    printf(">>>>> Digite os dados da segunda carta <<<<< \n");
    printf("-------------------------------------------- \n");

    printf("Digite o estado da carta (Ex.:'A' ate 'H'): ");
    scanf(" %c", &estado_2); // recebendo o estado 

    printf("Digite o codigo da carta (Ex.: A01): ");
    scanf("%s", &codCarta_2); // recebendo o codigo da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade_2); // recebendo o nome, podendo usar nome que contem espaço

    printf("Qual a população: ");
    scanf("%d", &populacao_2); // recebendo a quantidade da população 

    printf("Sua área total: ");
    scanf("%f", &area_2); // recebendo área total da cidade

    printf("O PIB dessa cidade: ");
    scanf("%f", &pib_2); // recebendo o PIB

    printf("Quantos pontos turisticos tem a cidade: "); 
    scanf("%d", &pontosTurist_2); // Recebendo quantidade de pontos turisticos

    // Calcualndo Dencidade Populacional e PIB per capita da carta 1
    dencidadePopulacional_1 = populacao_1 / area_1;
    pibPerCapita_1 = pib_1 / populacao_1;

    // Calcualndo Dencidade Populacional e PIB per capita da carta 2
    dencidadePopulacional_2 = populacao_2 / area_2;
    pibPerCapita_2 = pib_2 / populacao_2;    

    // mostrando os dados da primeira carta
    printf("--------------------------------------------- \n");
    printf("             >>>>> Carta 1 <<<<< \n");
    printf("--------------------------------------------- \n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codCarta_1);
    printf("Nome da cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turisticos: %d\n", pontosTurist_1);
    printf("Densidade Populacional: %.2f hab/km²\n", dencidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);

    // mostrando os dados da segunda carta
    printf("--------------------------------------------- \n");
    printf("             >>>>> Carta 2 <<<<< \n");
    printf("--------------------------------------------- \n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codCarta_2);
    printf("Nome da cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turisticos: %d\n", pontosTurist_2);
    printf("Densidade Populacional: %.2f hab/km²\n", dencidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);

    // Comparando as cartas
    printf("--------------------------------------------- \n");
    printf("       >>>>> Carta 1 Vs. Carta 2 <<<<< \n");
    printf("--------------------------------------------- \n");

    if (pontosTurist_1 > pontosTurist_2) {
        printf("Carta 1 - %s: %d \n", nomeCidade_1, pontosTurist_1);
        printf("Carta 2 - %s: %d \n", nomeCidade_2, pontosTurist_2);
        printf("Resultado: Carta 1 - %s VENCEU!!!\n", nomeCidade_1);
    } else {
        printf("Carta 1 - %s: %d \n", nomeCidade_1, pontosTurist_1);
        printf("Carta 2 - %s: %d \n", nomeCidade_2, pontosTurist_2);
        printf("Resultado: Carta 2 - %s VENCEU!!!\n", nomeCidade_2);
    }

    return 0;
}