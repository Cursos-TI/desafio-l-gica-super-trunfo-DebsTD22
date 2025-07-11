#include <stdio.h>

int main(){
    // Resolvendo desafio nivel novato do SuperTrunfo

    // declaração das variaveis da primeira carta
    char estado_1, codCarta_1[4], nomeCidade_1[100];
    int populacao_1, pontosTurist_1;
    float area_1, pib_1, densidadePopulacional_1, pibPerCapita_1;

    // declaração das variaveis da segunda carta
    char estado_2, codCarta_2[4], nomeCidade_2[100];
    int populacao_2, pontosTurist_2;
    float area_2, pib_2, densidadePopulacional_2, pibPerCapita_2;
    
    int opcao_1, opcao_2;

    // variavel para armazenar resultado das comparações
    int resultado_1, resultado_2;

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
    densidadePopulacional_1 = populacao_1 / area_1;
    pibPerCapita_1 = pib_1 / populacao_1;

    // Calcualndo Dencidade Populacional e PIB per capita da carta 2
    densidadePopulacional_2 = populacao_2 / area_2;
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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);

    // menu interativo para escolher o atributo para comparação
    printf("--------------------------------------------- \n");
    printf("          >>>>> MENU PRINCIPAL <<<<< \n");
    printf("--------------------------------------------- \n");
    printf("Escolha o primeiro atributo abaixo para comparar: \n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos\n"); 
    printf("5 - Densidade Populacional\n"); 
    printf("6 - PIB per Capita\n \n"); 
    printf("Digite aqui sua opção: ");
    scanf("%d", &opcao_1);

    // Comparando as cartas
    printf("--------------------------------------------- \n");
    printf("       >>>>> Carta 1 Vs. Carta 2 <<<<< \n");
    printf("--------------------------------------------- \n");

    switch (opcao_1){
    case 1: // se o atributo escolhido for população
        printf("O Atributo escolhido foi ***POPULAÇÂO***\n");

        // comparando os atributos
        resultado_1 = populacao_1 > populacao_2 ? 1 : 0;
        break;

    case 2: // se o atributo escolhido for área
        printf("O Atributo escolhido foi ***ÁREA***\n");

        // comparando os atributos
        resultado_1 = area_1 > area_2 ? 1 : 0;
        break;

    case 3: // se o atributo escolhido for PIB
        printf("O Atributo escolhido foi ***PIB***\n");

       // comparando os atributos
        resultado_1 = pib_1 > pib_2 ? 1 : 0;
        break;
    
    case 4: // se o atributo escolhido for pontos turisticos
        printf("O Atributo escolhido foi ***PONTOS TURISTICOS***\n");

        // comparando os atributos
        resultado_1 = pontosTurist_1 > pontosTurist_2 ? 1 : 0;
        break;

    case 5: // se o atributo escolhido for densidade populacional
        printf("O Atributo escolhido foi ***DENSIDADE POPULACIONAL***\n");

        // comparando os atributos
        resultado_1 = densidadePopulacional_1 < densidadePopulacional_2 ? 1 : 0;
        break;

    case 6: // se o atributo escolhido for PIB per capita
        printf("O Atributo escolhido foi ***PIB PER CAPITA***\n");

        // comparando os atributos
        resultado_1 = pibPerCapita_1 > pibPerCapita_2 ? 1 : 0;
        break;
    
    default: // opção escolhida for diferete das opções do menu
        printf("!!! OPÇÃO INVALIDO !!!"); 
        break;
    }

    // escolhendo segundo atributo
    printf("--------------------------------------------- \n");
    printf("Escolha o segundo atributo abaixo para comparar: \n");
    printf("!!! Atenção: escolha um atributo diferente do primeiro !!!\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos\n"); 
    printf("5 - Densidade Populacional\n"); 
    printf("6 - PIB per Capita\n \n"); 
    printf("Digite aqui sua opção: ");
    scanf("%d", &opcao_2);

    if (opcao_1 == opcao_2)
    {
        printf("Você escolheu o mesmo atributo");
    } else {
        switch (opcao_2){
        case 1: // se o atributo escolhido for população
            printf("O Atributo escolhido foi ***POPULAÇÂO***\n");

            // comparando os atributos
            resultado_2 = populacao_1 > populacao_2 ? 1 : 0;
        break;

        case 2: // se o atributo escolhido for área
            printf("O Atributo escolhido foi ***ÁREA***\n");

            // comparando os atributos
            resultado_2 = area_1 > area_2 ? 1 : 0;
        break;

        case 3: // se o atributo escolhido for PIB
            printf("O Atributo escolhido foi ***PIB***\n");

            // comparando os atributos
            resultado_2 = pib_1 > pib_2 ? 1 : 0;
        break;
    
        case 4: // se o atributo escolhido for pontos turisticos
            printf("O Atributo escolhido foi ***PONTOS TURISTICOS***\n");
                
            // comparando os atributos
            resultado_2 = pontosTurist_1 > pontosTurist_2 ? 1 : 0;
        break;

        case 5: // se o atributo escolhido for densidade populacional
            printf("O Atributo escolhido foi ***DENSIDADE POPULACIONAL***\n");

            // comparando os atributos
            resultado_2 = densidadePopulacional_1 < densidadePopulacional_2 ? 1 : 0;
        break;

        case 6: // se o atributo escolhido for PIB per capita
            printf("O Atributo escolhido foi ***PIB PER CAPITA***\n");
                
            // comparando os atributos
            resultado_2 = pibPerCapita_1 > pibPerCapita_2 ? 1 : 0;
        break;
    
        default: // opção escolhida for diferete das opções do menu
            printf("!!! OPÇÃO INVALIDO !!!"); 
        break;
    }

        if (resultado_1 && resultado_2)
        {
            printf(" *Carta 1* \n Nome: %s \n Área: %d km²\n \n", nomeCidade_1, area_1);
            printf(" *Carta 2* \n Nome: %s \n Área: %d km²\n \n", nomeCidade_2, area_2);
            
            printf("Você venceu!");
        } else if (resultado_1 != resultado_2)
        {
         printf("Empate");
        } else {
            printf("Você perdeu\n");
        }
    }

    // resultado final
   
    
    


    return 0;
}