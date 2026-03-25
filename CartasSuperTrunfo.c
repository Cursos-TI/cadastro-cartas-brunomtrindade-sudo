#include <stdio.h>
int main() {
    int populacao, populacao2;
    int turismo, turismo2;
    float area, area2;
    float pib, pib2;
    char codigo[3], codigo2[3];
    char letra, letra2;
    char nome[30], nome2[30];

        //Parâmetros para a primeira carta:

    printf("Aqui você irá inserir os dados do estado para a primeira carta. \n");
    printf("Nome do estado: \n");
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

    printf("Código do estado: \n");
    scanf("%s", &codigo);
    getchar();


        //Parâmetros para a segunda carta.

    printf("Agora, insera os dados do estado para a segunda carta. \n");
    printf("Nome do estado: \n");
    fgets(nome2, 30, stdin);

    printf("Letra do estado, de 'A' a 'H': \n");
    scanf(" %c", &letra2);

    printf("Área do estado: \n  ");
    scanf("%f", &area2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("População do estado: \n");
    scanf("%d", &populacao2);

    printf("PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Código do estado: \n");
    scanf(" %s", &codigo2);

        //Comparação entre as cartas:
    printf("Comparação entre as cartas: \n");
    printf("Carta 1:\n Nome: %s -Letra: %c \n-Área: %.2f Km²\n-Pontos Turísticos: %d \n-População: %d \n-PIB: %f Bilhões de Reais \n-Código da carta: %s \n", nome, letra, area, turismo, populacao, pib, codigo);
    printf("Carta 2:\n Nome: %s -Letra: %c \n-Área %.2f Km²\n-Pontos Turísticos: %d \n-População: %d \n-PIB: %f Bilhões de Reais \n-Código da carta: %s \n", nome2, letra2, area2, turismo2, populacao2, pib2, codigo2);

    return 0;
}
