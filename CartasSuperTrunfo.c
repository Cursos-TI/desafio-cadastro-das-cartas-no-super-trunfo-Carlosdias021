#include <stdio.h>

int main() {
    int numero1, numero2, numero1_2, numero2_2;
    char codigo1[10], nome[20], estado[20], codigo2[10], nome2[20], estado2[20];
    float pib, area, pib2, area2;

    /*cadastro da carta 1: numero1= População, numero2= Número de pontos turisticos, codigo1= Código da carta,
    nome= Nome da cidade, pib= Produto interno bruto, area= Área em Km², estado= Estado do país.

    Cadastro da carta 2: numero1_2= População, numero2_2= Número de pontos turisticos, codigo2= Código da carta,
    nome2=Nome da cidade, pib2= Produto interno bruto, area2= Área em Km², estado2= Estado do país*/

    printf("Cadastro das cartas Super Trunfo-Países!\n");

    printf("\n");
    printf("Cadastro da carta 1: \n");
    printf("\n");
    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);
    printf("Digite o nome do estado: ");
    scanf(" %s", estado);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome);
    printf("Digite o número da população: ");
    scanf(" %d", &numero1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &numero2);
    printf("Digite a área em Km²: ");
    scanf(" %f", &area);
    printf("Digite o Produto interno bruto: ");
    scanf(" %f", &pib);
    printf("\n");
    printf("\n");


    printf("Cadastro da carta 2: \n");
    printf("\n");
    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);
    printf("Digite o nome do estado: ");
    scanf(" %s", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);
    printf("Digite o número da população: ");
    scanf(" %d", &numero1_2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &numero2_2);
    printf("Digite a área em Km²: ");
    scanf(" %f", &area2);
    printf("Digite o Produto interno bruto: ");
    scanf(" %f", &pib2);
    printf("\n");
    printf("\n");


    printf("Carta 1\n");
    printf("\n");
    printf("Código da carta: %s\n", codigo1);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", numero1);
    printf("Pontos Turisticos: %d\n", numero2);
    printf("Área: %f\n", area);
    printf("Produto Interno Bruto: %f\n", pib);
    printf("\n");
    printf("\n");

    
    printf("Carta 2\n");
    printf("\n");
    printf("Código da carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", numero1_2);
    printf("Pontos Turisticos: %d\n", numero2_2);
    printf("Área: %f\n", area2);
    printf("Produto Interno Bruto: %f\n", pib2);




return 0;

}