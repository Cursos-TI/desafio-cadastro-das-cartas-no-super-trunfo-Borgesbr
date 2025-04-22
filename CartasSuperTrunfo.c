#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char uf[3], cidade[20], codigo[3];
    float area, pib;
    int populacao, pontos_turisticos;

    printf("------------------------------SEJA BEM VIDO(A) AO JOGO SUPER TRUNFO-----------------------------------\n");
    printf("Super Trunfo de Países: é um sistema para cadastrar cartas com informações sobre as cidades do Brasil.\n");

    printf("-------------------------------------------------------------------------------------------------------\n");

    printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");
    printf("\nDigite as siglas do estado escolhido por você: ");
    scanf("%2s", uf);

    printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
    scanf("%2s", codigo);

    printf("\nDigite a cidade escolhida por você: ");
    getchar(); // Consome a quebra de linha deixada pelo scanf anterior
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0; // Remove a quebra de linha do fgets

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("\nDigite o tamanho da área da cidade:");
    scanf("%f", &area);

    printf("\nDigite o valor do PIB da cidade: ");
    scanf("%f", &pib);

    printf("\nDigite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos);

    // fim da primeira carta
    // inicio da segunda carta

    char uf2[3], cidade2[20], codigo2[3];
    float area2, pib2;
    int populacao2, pontos_turisticos2;

    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");

    printf("\nDigite as siglas do estado escolhido por você: ");
    scanf("%2s", uf2);

    printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
    scanf("%2s", codigo2);

    printf("\nDigite a cidade escolhida por você: ");
    getchar(); // Consome a quebra de linha deixada pelo scanf anterior
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha do fgets

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("\nDigite o tamanho da área da cidade: ");
    scanf("%f", &area2);

    printf("\nDigite o valor do PIB da cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");

    printf("\nEstado: %s", uf);
    printf("\nCódigo: %s%s", uf, codigo);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de pontos túristicos: %d", pontos_turisticos);

    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");

    printf("\nEstado: %s", uf2);
    printf("\nCódigo: %s%s", uf2, codigo2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f  km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos túristicos: %d\n", pontos_turisticos2);

    return 0;
}
