#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char uf[3], cidade[15];
    float area, pib;
    int codigo, populacao, numero_de_pontos_turisticos;

    printf("----- INSIRA ABAIXO OS DADOS DA PRIMEIRA CARTA ------\n" );

    printf("Digite as siglas do estado escolhido por você: ");
    scanf("%2s", uf);

    printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
    scanf("%d", codigo);

    printf("\nDigite a cidade escolhida por você: ");
    scanf("%s", cidade);

    printf("\nDigite o numero de habitantes da cidade: ");
    scanf("%d", populacao);

    printf("\nDigite o tamanho da área da cidade:");
    scanf("%f", area);

    printf("\nDigite o valor do PIB: da cidade");
    scanf("%f", pib);

    printf("\nDigite quantos pontos turisticos tem na cidade: ");
    scanf("%d", numero_de_pontos_turisticos);





    return 0;
}
