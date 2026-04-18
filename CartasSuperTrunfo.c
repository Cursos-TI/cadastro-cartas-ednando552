#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados
  // Carta 1
  char nome1 [20] = "A";
  char codigodacarta1 [4] = "A01";
  char cidade1 [20] = "São Paulo";
  int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontosturisticos1 = 50;
  float densidade1 = populacao1/area1;
  float pibpercapita1 = pib1*1000000000/populacao1; // O PIB é dado em bilhões, para isso multipliquei por 1 bilhão para obter o valor em reais

  //Carta 2
  char nome2 [20] = "B"; 
  char codigodacarta2 [4] = "B02";
  char cidade2 [20] = "Manaus";
  float populacao2 = 2219580;
  float area2 = 1570745.7;
  float pib2 = 65.1;
  int pontosturisticos2 = 7;
  float densidade2 = populacao2/area2

  // Área para exibição dos dados da cidade
  // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", nome1);
    printf("Codigo da Carta: %s\n", codigodacarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    
    //Carta 2
    printf("Carta 2:\n");
    printf("Nome: %s\n",nome2);
    printf("Codigo da Carta: %s\n", codigodacarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.1f\n", area2);
    printf("PIB: %.1f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Demográfica: %1f\n", densidade2)
return 0;
} 
