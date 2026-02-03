#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char carta1[3];
    char carta2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
  // Área para entrada de dados
    printf("Vamos começar com uma carta de cada vez. Pronto?\n");
    printf(" \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n");
    scanf(" %s", carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes: \n");
    scanf("%i", &populacao1);
    printf("Digite a área dessa cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &turismo1);
    printf(" \n");

    printf("Agora vamos para a segunda carta. Pronto?\n");
    printf(" \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf(" %s", carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: \n");
    scanf("%i", &populacao2);
    printf("Digite a área dessa cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &turismo2);
    printf(" \n");
  // Área para exibição dos dados da cidade
    printf("Pronto para conferir as 2 cartas registradas?\n");
    printf(" \n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", turismo1);
    printf(" \n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", turismo2);
    printf(" \n");

    return 0;
} 
