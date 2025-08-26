#include <stdio.h>

int main() {

    char estado1[21], estado2[21];
    char codigo1[5], codigo2[5];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area_total1, area_total2;
    float pib1, pib2;
    int pt_turistico1, pt_turistico2;
    float densi_pop1, densi_pop2;
    float pib_cap1, pib_cap2;
    float SuperPoder1, SuperPoder2;


//Coleta de dados da primeira carta
    printf("Insira as informações da primeira carta:\n");

    printf("Digite o estado: \n");
        scanf ("%20s", &estado1);
    printf("Digite o código da carta(Iniciais do estado + Número): \n");
        scanf ("%4s", &codigo1);
    printf("Digite o nome da cidade: \n");
        scanf ("%19s", &nome_cidade1);
    printf("Digite a população da cidade: \n");
        scanf ("%d", &populacao1);
    printf("Digite a área (em km²): \n");
        scanf ("%f", &area_total1);
    printf("Digite o PIB da cidade: \n");
        scanf ("%f", &pib1);
    printf("Digite o númeor de pontos turísticos: \n");
        scanf ("%d", &pt_turistico1);

//Coleta de dados da segunda carta
    printf("Insira as informações da segunda carta:\n");

    printf("Digite o estado: \n");
        scanf ("%20s", &estado2);
    printf("Digite o código da carta(Iniciais do estado + Número): \n");
        scanf ("%4s", &codigo2);
    printf("Digite o nome da cidade: \n");
        scanf ("%19s", &nome_cidade2);
    printf("Digite a população da cidade: \n");
        scanf ("%d", &populacao2);
    printf("Digite a área (em km²): \n");
        scanf ("%f", &area_total2);
    printf("Digite o PIB da cidade: \n");
        scanf ("%f", &pib2);
    printf("Digite o númeor de pontos turísticos: \n");
        scanf ("%d", &pt_turistico2);


//Cálculo da Densidade Populacional e PIB per Capita

densi_pop1 = (float) populacao1 / area_total1;
densi_pop2 = (float) populacao2 / area_total2;

pib_cap1 = (float) pib1 / populacao1;
pib_cap2 = (float) pib2 / populacao2;

//Cálculo de Super Poder

SuperPoder1 = (float) (populacao1 + area_total1 + pib1 + pt_turistico1) - densi_pop1;
SuperPoder2 = (float) (populacao2 + area_total2 + pib2 + pt_turistico2) - densi_pop2;
    
//Exibição de informações da primeira carta, por ordem de coleta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área Total: %.2f km²\n", area_total1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pt_turistico1);
    printf("Densidade Populacional: %.2f\n", densi_pop1);
    printf("PIB per Capita: %.2f\n", pib_cap1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    printf("\n");

//Exibição de informações da primeira carta, por ordem de coleta

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área Total: %.2f km²\n", area_total2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pt_turistico2);
    printf("Densidade Populacional: %.2f\n", densi_pop2);
    printf("PIB per Capita: %.2f\n", pib_cap2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    printf("\n");

    //Comparação das cartas

    printf("Comparação das Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (2-(populacao1 > populacao2)), populacao1 > populacao2);
    printf("Área Total: Carta %d venceu (%d)\n", (2-(area_total1 > area_total2)), area_total1 > area_total2);
    printf("PIB: Carta %d venceu (%d)\n", (2-(pib1 > pib2)), pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (2-(pt_turistico1 > pt_turistico2)), pt_turistico1 > pt_turistico2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (2-(densi_pop1 > densi_pop2)), densi_pop1 > densi_pop2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (2-(pib_cap1 > pib_cap2)), pib_cap1 > pib_cap2);
    printf("Super Poder: Carta %d venceu (%d)\n", (2-(SuperPoder1 > SuperPoder2)), SuperPoder1 > SuperPoder2);

    return 0;
}
