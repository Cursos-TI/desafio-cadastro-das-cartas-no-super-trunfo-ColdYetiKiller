
#include <stdio.h>

int main() {

    char estado1[21], estado2[21];
    char codigo1[5], codigo2[5];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area_total1, area_total2;
    float pib1, pib2;
    int pt_turistico1, pt_turistico2;


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

    
//Exibição de informações da primeira carta, por ordem de coleta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área total: %.2f km²\n", area_total1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pt_turistico1);
    printf("\n");

//Exibição de informações da segunda carta, por ordem de coleta

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área total: %.2f km²\n", area_total2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pt_turistico2);

    return 0;
}
