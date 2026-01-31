#include<stdio.h>
int main(){
    /* Declaração das variáveis do jogo super trunfo, neste momento serão cadastradas 2 cartas, por isso as variaveis estão duplicadas*/
    int  p_tur1, p_tur2;
    float area1, area2, pib1, pib2, densidade1,densidade2, pib_pcap1, pib_pcap2, superpoder1, superpoder2;
    char cidade1[50], cidade2[50], estado1, estado2, cod_carta1[4], cod_carta2[4];
    unsigned long int populacao1, populacao2;

    /*neste momento coleta as informações das cartas e aloca nas variaveis de cada carta*/
    /*recebe letra do estado carta 1*/
    printf("Digite a letra do Estado da carta 1: \n");
    scanf(" %c", &estado1);

    /*recebe o código das cartas 1*/
    printf("Digite o codigo da  carta 1 (Letra do Estado + um numero de 01 a 04): \n");
    scanf("%s", cod_carta1);

    /*recebe o nome da cidade da carta 1*/
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade1);

    /*recebe os valores das população carta 1*/
    printf("Digite a populacao da  carta 1: \n");
    scanf("%lu", &populacao1);

    /*recebe o valor da área carta 1*/
    printf("Digite a area(km²) da carta 1: \n");
    scanf("%f", &area1);

    /*recebe o valore do PIB carta 1*/
    printf("Digite o PIB (Bilhoes de reais) da carta 1: \n");
    scanf("%f", &pib1);

    /*recebe o numero de pontos turisticos*/
    printf("Digite o numero de pontos turisticos da carta 1: \n");
    scanf("%d", &p_tur1);

    /*recebe letra do estado carta 2*/
    printf("\nDigite a letra do Estado da carta 2: \n");
    scanf(" %c", &estado2);

    /*recebe o código das cartas 2*/
    printf("Digite o codigo da  carta 2 (Letra do Estado + um numero de 01 a 04): \n");
    scanf("%s", cod_carta2);

    /*recebe o nome da cidade da carta 2*/
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);

    /*recebe os valores das população carta 2*/
    printf("Digite a populacao da carta 2: \n");
    scanf("%lu", &populacao2);

    /*recebe o valor da área carta 2*/
    printf("Digite a area(km²) da carta 2: \n");
    scanf("%f", &area2);

    /*recebe o valore do PIB carta 2*/
    printf("Digite o PIB (Bilhoes de reais) da carta 2: \n");
    scanf("%f", &pib2);

    /*recebe o numero de pontos turisticos*/
    printf("Digite o numero de pontos turisticos da carta 2: \n");
    scanf("%d", &p_tur2);

    /*calcula densidade e pib per capita*/
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_pcap1 = (pib1 * 1000000000.0f) / populacao1;
    pib_pcap2 = (pib2 * 1000000000.0f) / populacao2;

    /*calcula o super poder de cada carta*/
    superpoder1 = (area1 / populacao1) + p_tur1 + area1 + pib1 + pib_pcap1 + populacao1;
    superpoder2 = (area2 / populacao2) + p_tur2 + area2 + pib2 + pib_pcap2 + populacao2;


    /*exibe os valores da carta 1*/
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", p_tur1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1); //exibe resultado do calculo da densidade
    printf("PIB per Capita: %.2f reais\n", pib_pcap1); //exibe resultado do calculo do pib per capita


    /*exibe os valores da carta 2*/
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", p_tur2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2); //exibe resultado do calculo da densidade
    printf("PIB per Capita: %.2f reais\n", pib_pcap2); //exibe resultado do calculo do pib per capita

    /*Comparação de resultados*/
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", p_tur1 > p_tur2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_pcap1 > pib_pcap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

return 0;
}