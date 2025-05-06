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
    int populacao, pontos_turisticos;
   double pib_total, pib_per_capita, pib, area, densidade_populacional;

    printf("------------------------------SEJA BEM VIDO(A) AO JOGO SUPER TRUNFO-----------------------------------\n");
    printf("Super Trunfo de Países: é um sistema para cadastrar cartas com informações sobre as cidades do Brasil.\n");

    printf("-------------------------------------------------------------------------------------------------------\n");

    printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");

    printf("\nDigite as siglas do estado onde fica a cidade: ");
    scanf("%2s", uf);

    printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
    scanf("%2s", codigo);

    printf("\nDigite a cidade escolhida por você: ");
    scanf(" %[^\n]", cidade); 

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("\nDigite o tamanho da área da cidade:");
    scanf("%lf", &area);

    printf("\nDigite o valor do PIB da cidade: ");
    scanf("%lf", &pib);

    printf("\nDigite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (double) populacao / area;
    pib_total = pib * 1000000000;
    pib_per_capita = pib_total / populacao;

    // fim da primeira carta

    // inicio da segunda carta

    char uf2[3], cidade2[20], codigo2[3];
    int pontos_turisticos2, populacao2;
   double densidade2, pib2, pib_total2, pib_per_capita2, area2;
   
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");

    printf("\nDigite as siglas do estado onde fica a cidade: ");
    scanf("%2s", uf2);

    printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
    scanf("%2s", codigo2);

   printf("\nDigite a cidade escolhida por você: ");
    scanf(" %[^\n]", cidade2); 

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("\nDigite o tamanho da área da cidade: ");
    scanf("%lf", &area2);

    printf("\nDigite o valor do PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("\nDigite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (double) populacao2 / area2;
    pib_total2 = pib2 * 1000000000;
    pib_per_capita2 = pib_total2 / populacao2;
    
  printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");

    printf("\nEstado: %s", uf);
    printf("\nCódigo: %s%s", uf, codigo);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de pontos túristicos: %d", pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf("\nPIB per Capita: %.2f reais\n", pib_per_capita);    

    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("\n🢃🢃🢃🢃 DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");

    printf("\nEstado: %s", uf2);
    printf("\nCódigo: %s%s", uf2, codigo2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2lf  km²", area2);
    printf("\nPIB: %.2lf bilhões de reais", pib2);
    printf("\nNúmero de pontos túristicos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2lf hab/km²", densidade2);
    printf("\nPIB per Capita: %.2lf reais\n", pib_per_capita2);


    return 0;
}
