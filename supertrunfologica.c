#include <stdio.h>

int main (){

    // Declaração de variáveis para armazenar os dados das cartas:
    // Estado, Código, Cidade, População, Área, PIB, Pontos Turísticos
    // Densidade Populacional, PIB per Capita

    char estado1[20], estado2[20], codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int pontos1, pontos2, opcaomenu;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;

    // Coleta de dados da 1ª carta:

    printf ("Digite o Estado da 1ª carta: ");
    scanf ("%s", estado1);
    printf ("Digite o código da 1ª carta: ");
    scanf ("%s", codigo1);
    printf ("Digite a Cidade da 1ª carta: ");
    scanf ("%s", cidade1);
    printf ("Digite a população da 1ª carta: ");
    scanf ("%lu", &populacao1);
    printf ("Digite a área da 1ª carta em km²: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB da 1ª carta: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos da 1ª carta: ");
    scanf ("%d", &pontos1);

    // Coleta de dados da 2ª carta:

    printf ("Digite o Estado da 2ª carta: ");
    scanf ("%s", estado2);
    printf ("Digite o código da 2ª carta: ");
    scanf ("%s", codigo2);
    printf ("Digite a Cidade da 2ª carta: ");
    scanf ("%s", cidade2);
    printf ("Digite a população da 2ª carta: ");
    scanf ("%lu", &populacao2);
    printf ("Digite a área da 2ª carta em km²: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB da 2ª carta: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos da 2ª carta: ");
    scanf ("%d", &pontos2);

    // Cálculo de Densidade Populacional e PIB per Capita de ambas as cartas:

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;

    // Impressão de dados da 1ª carta:

    printf ("Carta 1: \n");
    printf ("Estado: %s \nCidade: %s \nCódigo: %s \n", estado1, cidade1, codigo1);
    printf ("Área: %.2f km² \nPopulação: %lu habitantes \n", area1, populacao1);
    printf ("PIB: %.2f de reais \nPontos Turísticos: %d \n", pib1, pontos1);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf ("Pib per Capita: %.2f reais. \n", pibpercapita1);

     // Impressão de dados da 2ª carta:

    printf ("Carta 2: \n");
    printf ("Estado: %s \nCidade: %s \nCódigo: %s \n", estado2, cidade2, codigo2);
    printf ("Área: %.2f km² \nPopulação: %lu habitantes \n", area2, populacao2);
    printf ("PIB: %.2f de reais \nPontos Turísticos: %d \n", pib2, pontos2);
    printf ("Densidade Populacional: %.2f hab/km² \n", densidade2);   
    printf ("Pib per Capita: %.2f reais. \n", pibpercapita2);

    // Menu Interativo

    printf ("Escolha um atributo para comparação: \n");
    printf ("1. Área \n");
    printf ("2. População \n");
    printf ("3. PIB \n");
    printf ("4. Densidade Geográfica \n");
    printf ("5. PIB per Capita \n");
    printf ("6. Pontos Turísticos \n");
    printf ("Digite aqui sua escolha: ");
    scanf ("%d", &opcaomenu);

    // Comparação dos atributos usando switch:

    switch (opcaomenu) {

    // Área 
    
    case 1:
    printf("Comparação de cartas (Atributo: Área):\n\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n\n", cidade2, estado2, area2);

    if (area1 > area2)
        printf("Carta 1 venceu em área!\n\n");
    else if (area2 > area1)
        printf("Carta 2 venceu em área!\n\n");
    else
        printf ("Empate!\n\n");
    break;

    // População

    case 2:
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2)
        printf("Carta 1 venceu em população!\n\n");
    else if (populacao2 > populacao1) 
        printf("Carta 2 venceu em população!\n\n");
    else 
        printf ("Empate!\n\n");
    break;

    // PIB

    case 3:
    printf("Comparação de cartas (Atributo: PIB):\n\n");
    printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n\n", cidade2, estado2, pib2);

    if (pib1 > pib2)
        printf("Carta 1 venceu em PIB!\n\n");
    else if (pib2 > pib1)
        printf("Carta 2 venceu em PIB!\n\n");
    else
        printf ("Empate!\n\n");
    break;

    // Densidade

    case 4:
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n\n", cidade2, estado2, densidade2);

    if (densidade1 < densidade2)
        printf("Carta 1 venceu em densidade populacional!\n\n");
    else if (densidade2 < densidade1)
        printf("Carta 2 venceu em densidade populacional!\n\n");
    else 
        printf ("Empate!\n\n");
    break;

    // PIB per Capita

    case 5:
    printf("Comparação de cartas (Atributo: PIB per Capita):\n\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n\n", cidade2, estado2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2)
        printf("Carta 1 venceu em PIB per capita!\n\n");
    else if (pibpercapita2 > pibpercapita1)
        printf("Carta 2 venceu em PIB per capita!\n\n");
    else
        printf ("Empate!\n\n");
    break;

    // Pontos Turísticos

    case 6:    
    printf("Comparação de cartas (Atributo: Pontos Turísticos):\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontos1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, pontos2);

    if (pontos1 > pontos2)
        printf("Carta 1 venceu em pontos turísticos!\n\n");
    else if (pontos2 > pontos1)
        printf("Carta 2 venceu em pontos turísticos!\n\n");
    else
        printf ("Empate!\n\n");
    break;    
    
    // Default (Para opção inválida)

    default:
        printf ("Opção inválida. \n");
    }    

        //Fim do Código

    return 0;
}
