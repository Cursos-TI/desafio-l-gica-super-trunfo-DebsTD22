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

    // menu interativo para escolher o atributo para comparação
    int opcao;
    printf("--------------------------------------------- \n");
    printf("          >>>>> MENU PRINCIPAL <<<<< \n");
    printf("--------------------------------------------- \n");
    printf("Escolha uma das opções abaixo para comparar: \n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos\n"); 
    printf("5 - Densidade Populacional\n"); 
    printf("6 - PIB per Capita\n"); 
    printf("Digite aqui sua opção: ");
    scanf("%d", &opcao);

    // Comparando as cartas
    printf("--------------------------------------------- \n");
    printf("       >>>>> Carta 1 Vs. Carta 2 <<<<< \n");
    printf("--------------------------------------------- \n");

    switch (opcao){
    case 1: // se o atributo escolhido for população
        printf(" *Carta 1* \n Nome: %s \n População: %d \n \n", nomeCidade_1, populacao_1);
        printf(" *Carta 2* \n Nome: %s \n População: %d \n \n", nomeCidade_2, populacao_2);

        if (populacao_1 > populacao_2){
            printf("A Carta 1 venceu!\n");
        } else if (populacao_1 < populacao_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        
        break;

    case 2: // se o atributo escolhido for área
        printf(" *Carta 1* \n Nome: %s \n Área: %d km²\n \n", nomeCidade_1, area_1);
        printf(" *Carta 2* \n Nome: %s \n Área: %d km²\n \n", nomeCidade_2, area_2);

        if (area_1 > area_2){
            printf("A Carta 1 venceu!\n");
        } else if (area_1 < area_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        break;

    case 3: // se o atributo escolhido for PIB
        printf(" *Carta 1* \n Nome: %s \n PIB: %d bilhões de reais\n \n", nomeCidade_1, pib_1);
        printf(" *Carta 2* \n Nome: %s \n PIB: %d bilhões de reais\n \n", nomeCidade_2, pib_2);

        if (pib_1 > pib_2){
            printf("A Carta 1 venceu!\n");
        } else if (pib_1 < pib_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        break;
    
    case 4: // se o atributo escolhido for pontos turisticos
        printf(" *Carta 1* \n Nome: %s \n Pontos Turisticos: %d \n \n", nomeCidade_1, pontosTurist_1);
        printf(" *Carta 2* \n Nome: %s \n Pontos Turisticos: %d \n \n", nomeCidade_2, pontosTurist_2);

        if (pontosTurist_1 > pontosTurist_2){
            printf("A Carta 1 venceu!\n");
        } else if (pontosTurist_1 < pontosTurist_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        break;

    case 5: // se o atributo escolhido for densidade populacional
        printf(" *Carta 1* \n Nome: %s \n Densidade Populacional: %d hab/km²\n \n", nomeCidade_1, dencidadePopulacional_1);
        printf(" *Carta 2* \n Nome: %s \n Densidade Populacional: %d hab/km²\n \n", nomeCidade_2, dencidadePopulacional_2);

        if (dencidadePopulacional_1 < dencidadePopulacional_2){
            printf("A Carta 1 venceu!\n");
        } else if (dencidadePopulacional_1 > dencidadePopulacional_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        break;

    case 6: // se o atributo escolhido for PIB per capita
        printf(" *Carta 1* \n Nome: %s \n PIB per Capita: %d reais\n \n", nomeCidade_1, pibPerCapita_1);
        printf(" *Carta 2* \n Nome: %s \n PIB per Capita: %d reais\n \n", nomeCidade_2, pibPerCapita_2);

        if (pibPerCapita_1 > pibPerCapita_2){
            printf("A Carta 1 venceu!\n");
        } else if (pibPerCapita_1 < pibPerCapita_2){
            printf("A Carta 2 venceu!\n");
        } else {
            printf("Empatou\n");
        }
        break;
    
    default: // opção escolhida for diferete das opções do menu
        printf("!!! OPÇÃO INVALIDO !!!"); 
        break;
    }

    return 0;
}