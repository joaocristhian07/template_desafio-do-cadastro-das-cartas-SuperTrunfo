#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo_carta[10];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos_turísticos;
// Área para entrada de dados
//carta1
  printf("dados da primeira Carta\n");
  printf(" - digite seu estado: \n");
  scanf(" %c", &estado);
  printf(" - digite o codigo da carta 1: \n");
  scanf("%s", codigo_carta);
  printf(" - digite a cidade: \n");
  scanf("%s", cidade);
  printf(" - digite a populaçao: \n");
  scanf("%d", &populacao);
  printf(" - digite a area: \n");
  scanf("%f", &area);
  printf(" - digite o pib: \n");
  scanf("%f", &pib);
  printf(" - digite o numero de pontos turísticos: \n");
  scanf("%d", &pontos_turísticos);
// Área para exibição dos dados da cidade
  printf(" - seu estado é:  %c\n - o codigo da primeira carta é: %s\n - o nome da sua cidade é: %s\n - a população da sua cidade é: %d\n - o seu pib é: %f\n - o sua area é: %f \n - o numero de pontos turísticos é: %d\n", estado, codigo_carta, cidade, populacao, pib, area, pontos_turísticos);
//carta1-fim

//carta2

  printf("dados da segunda carta: \n");
  printf(" - digite seu estado: \n");
  scanf(" %c", &estado);
  printf(" - digite o codigo da carta 2: \n");
  scanf("%s", codigo_carta);
  printf(" - digite a cidade: \n");
  scanf("%s", cidade);
  printf(" - digite a populaçao: \n");
  scanf("%d", &populacao);
  printf(" - digite a area: \n");
  scanf("%f", &area);
  printf(" - digite o pib: \n");
  scanf("%f", &pib);
  printf(" - digite o numero de pontos turísticos: \n");
  scanf("%d", &pontos_turísticos);
// Área para exibição dos dados da cidade
  printf(" - seu estado é: %c\n - o codigo da segunda carta é: %s\n - o nome da sua cidade é: %s\n - a população da sua cidade é: %d\n - o seu pib é: %f\n - o sua area é: %f \n - o numero de pontos turísticos é: %d\n", estado, codigo_carta, cidade, populacao, pib, area, pontos_turísticos);
  
  return 0;
} 
