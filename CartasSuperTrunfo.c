#include <stdio.h>

int main() {
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o código da carta: \n");
    scanf("%d", &codigo);
    
    printf(" Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turisticos: \n");
    scanf("&d", &pontosturisticos);

    printf("Nome do estado: %s", estado);
    printf("Número do código: %d", codigo);
    printf("Nome da cidade: %s", cidade);
    printf("Número de habitantes: %d", populacao);
    printf("Área em km²: %f", area);
    printf("Produto interno bruto: %f", pib);
    printf("Número de pontos turisticos: %d", pontosturisticos);

    return 0;
}
