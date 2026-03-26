#include <stdio.h>

int main() {
    int populacao, populacao2;
    int turismo, turismo2;
    float area, area2, densidade, densidade2;
    float pib, pib2, percapita, percapita2;
    char codigo[5], codigo2[5];
    char letra, letra2;
    char nome[30], nome2[30];

    //Parâmetros para a primeira carta:

    printf("Aqui você irá inserir os dados do estado para a primeira carta. \n");
    printf("Nome do estado: ");
    fgets(nome, 30, stdin);

    printf("Letra do estado, de 'A' a 'H': \n");
    scanf(" %c", &letra);

    printf("Área do estado: \n");
    scanf("%f", &area);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("População do estado: \n");
    scanf("%d", &populacao);

    printf("PIB do estado: \n");
    scanf("%f", &pib);
    percapita = (float)pib / populacao;

    printf("Código do estado: \n    ");
    scanf("%s", codigo);

    densidade = (float)populacao / area;

    //Parâmetros para a segunda carta.

    printf("Agora, insira os dados do estado para a segunda carta. \n");
    printf("Nome do estado: \n");
    getchar(); // limpa o buffer antes do fgets
    fgets(nome2, 30, stdin);

    printf("Letra do estado, de 'A' a 'H': \n");
    scanf(" %c", &letra2);

    printf("Área do estado: \n  ");
    scanf("%f", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("População do estado: \n");
    scanf("%d", &populacao2);
    densidade2 = (float)populacao2 / area2;

    printf("PIB do estado: \n");
    scanf("%f", &pib2);
    percapita2 = (float)pib2 / populacao2;

    printf("Código do estado: \n");
    scanf("%s", codigo2);

    //Comparação entre as cartas:

    printf("Comparação entre as cartas: \n");

    printf("Carta 1:\n");
printf("Nome: %s", nome);
printf("Letra: %c\n", letra);
printf("Área: %f Km²\n", area);
printf("Pontos turísticos: %d\n", turismo);
printf("População: %d\n", populacao);
printf("Densidade Populacional: %f Hab/km²\n", densidade);
printf("PIB: %f Trilhões de reais\n", pib);
printf("PIB per capita: %.1f\n", percapita);
printf("Código: %s\n", codigo);

printf("Carta 2:\n");
printf("Nome: %s", nome2);
printf("Letra: %c\n", letra2);
printf("Área: %f Km²\n", area2);
printf("Pontos turísticos: %d\n", turismo2);
printf("População: %d\n", populacao2);
printf("Densidade Populacional: %f Hab/km²\n", densidade2);
printf("PIB: %f Trilhões de reais\n", pib2);
printf("PIB per capita: %f Reais\n", percapita2);
printf("Código: %s\n", codigo2);

    return 0;
}
