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
  char cidade1 [20] = "Fortaleza";
  int populacao1 = 9075649;
  float area1 = 148920.472;
  float pib1 = 130.3;
  int pontosturisticos1 = 10;
  
  //Carta 2
    char nome2 [20] = "B";
    char codigodacarta2 [4] = "B02";
    char cidade2 [20] = "Manaus";
    int populacao2 = 2219580;
    float area2 = 1570745.7;
    float pib2 = 65.1;
    int pontosturisticos2 = 7;
  // Área para exibição dos dados da cidade
  // Carta 1
    printf("Carta 1:\n");
    printf("Nome: %s\n", nome1);
    printf("Codigo da Carta: %s\n", codigodacarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.3f\n", area1);
    printf("PIB: %.1f\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosturisticos1);

    //Carta 2
    printf("Carta 2:\n");
    printf("Nome: %s\n", nome2);
    printf("Codigo da Carta: %s\n", codigodacarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.1f\n", area2);
    printf("PIB: %.1f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
return 0;
} 
