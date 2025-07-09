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
    float superPoder_1;

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
    float superPoder_2;
    
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

    // calculando densidade populacional da primeira carta 
    dencidadePopulacional_1 = populacao_1 / area_1;
    // calculando PIB per capita da primeira carta 
    pibPerCapita_1 = pib_1 / populacao_1;
    // mostrando os valores de densidade populacional e PIB per capita
    printf("Densidade Populacional: %.2f hab/km²\n", dencidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);

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

    // calculando densidade populacional da segunda carta 
    dencidadePopulacional_2 = populacao_2 / area_2;
    // calculando PIB per capita da segunda carta 
    pibPerCapita_2 = pib_2 / populacao_2;   
    // mostrando os valores de densidade populacional e PIB per capita
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