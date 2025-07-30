#include <stdio.h>

int main() {
    char estado1, estado2, cidade1[20], cidade2[20], codigo1[4], codigo2[4];
    int populacao1 = 0, populacao2 = 0, pontosturisticos1 = 0, pontosturisticos2 = 0;
    float areakm1 = 0, areakm2 = 0, pib1 = 0, pib2 = 0, densidade1, densidade2, pibPercapita1, pibPercapita2;;

    printf("\n\n-----JOGO SUPER TRUNFO-----\n");
    printf("---------------------------\n\n");

    printf("A seguir digite os dados da primeira carta\n\n");
    printf("Digite o Estado em uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite o número da carta, de 01 a 04, junto com a letra do estado escolhida (EX: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (em apenas um nome): ");
    scanf("%s", cidade1);

    printf("Digite o número da população em quantidade de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em KM: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    printf("\n--------------------------------------------------------\n\n");

    printf("Agora digite os dados sa segunda cidade.\n\n");
    printf("Digite o Estado em uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta, de 01 a 04, junto com a letra do estado escolhida (EX: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (em apenas um nome): ");
    scanf("%s", cidade2);

    printf("Digite o número da população em quantidade de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em KM: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    densidade1 = (float) populacao1 / areakm1;
    pibPercapita1 = (float) (pib1 * 1000000000) / populacao1;

    densidade2 = (float) populacao2 / areakm2;
    pibPercapita2  = (float) (pib2 * 1000000000) / populacao2;

    printf("\n--------------------------------------------------------\n\n");

    printf("Carta 01:\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2fkm²\n", areakm1);
    printf("PIB:%.1f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos:%d\n", pontosturisticos1);
    printf("Densidade Poulaciona:%.2f\n", densidade1);
    printf("PIB Percapita:%.2f\n", pibPercapita1);

    printf("\n--------------------------------------------------------\n\n");

    printf("Carta 02:\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2fkm²\n", areakm2);
    printf("PIB:%.1f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos:%d\n", pontosturisticos2);
    printf("Densidade Poulaciona:%.2f\n", densidade2);
    printf("PIB Percapita:%.2f\n", pibPercapita2);

    return 0;
}
