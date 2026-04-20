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
  unsigned long int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontosturisticos1 = 50;
  float densidade1 = 1/populacao1/area1; //densidade invertida o valor tem de ser dividido por 1
  float pibpercapita1 = pib1*1000000000/populacao1; // O PIB é dado em bilhões, por isso multipliquei por 1 bilhão para obter o valor em reais
  float superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapita1)/6; //Média dos Atributos
  printf("\n");

  //Carta 2
  char nome2 [20] = "B";
  char codigodacarta2 [4] = "B02";
  char cidade2 [20] = "Rio de Janeiro";
  unsigned long int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int pontosturisticos2 = 30;
  float densidade2 = 1/populacao2/area2;
  float pibpercapita2 = pib2*1000000000/populacao2; // O PIB é dado em bilhões, por isso multipliquei por 1 bilhão para obter o valor em reais
  float superpoder2 = (populacao2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2 + area2)/6;
  printf("\n");

  // Área para exibição dos dados da cidade
  // Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", nome1);
    printf("Codigo da Carta: %s\n", codigodacarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n");
    //Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", nome2);
    printf("Codigo da Carta: %s\n", codigodacarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    //Comparando as cartas
    printf("Comparação entre as cartas!\n");
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    resultado1 = (populacao1 > populacao2) ?
    printf("População: Carta 1 venceu\n") : printf("População: Carta 2 é maior que Carta 1\n");
    resultado2 = (area1 > area2) ?
    printf("Área: Carta 1 venceu\n") : printf("Área: Carta 2 é maior que Carta 1\n");
    resultado3 = (pib1 > pib2) ?
    printf("PIB: Carta 1 venceu\n") : printf("PIB: Carta 2 é maior que Carta 1\n");
    resultado4 = (pontosturisticos1 > pontosturisticos2) ?
    printf("Pontos Turísticos: Carta 1 venceu\n") : printf("Pontos Turísticos: Carta 2 é maior que Carta 1\n");
    resultado5 = (densidade1 > densidade2) ?
    printf("Densidade Demográfica: Carta 1 venceu\n") : printf("Densidade Demográfica: Carta 2 venceu\n");
    resultado6 = (pibpercapita1 > pibpercapita2) ?
    printf("PIB per capita: Carta 1 venceu\n") : printf("PIB per capita: Carta 2 é maior que Carta 1\n");
    resultado7 = (superpoder1 > superpoder2) ?
    printf("Super Poder: Carta 1 venceu\n") : printf("Super Poder: Carta 2 é maior que Carta 1\n");
    printf("E aí? Gostou do meu jogo? Nem sei se alguém vai ver isso... mas me diverti fazendo esse código!\n");
    printf("Até a próxima! :)");

return 0;
} 
