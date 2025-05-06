#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
         char uf[3], cidade[20], codigo[3];
        int pontos_turisticos;
        double pib_total, pib_per_capita, pib, area, densidade_populacional;
        unsigned long int populacao;
    
        printf("------------------------------SEJA BEM VINDO(A) AO JOGO SUPER TRUNFO-----------------------------------\n");
        printf("Super Trunfo de Países: é um sistema para cadastrar cartas com informações sobre as cidades do Brasil.\n");
        printf("-------------------------------------------------------------------------------------------------------\n");
        printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");
    
        printf("\nDigite as siglas do estado onde fica a cidade: ");
        scanf("%2s", uf);
    
        printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
        scanf("%2s", codigo);
    
        printf("\nDigite a cidade escolhida por você: ");
        scanf(" %19[^\n]", cidade);
    
        printf("\nDigite o número de habitantes da cidade: ");
        scanf("%lu", &populacao);
    
        printf("\nDigite o tamanho da área da cidade: ");
        scanf("%lf", &area);
    
        printf("\nDigite o valor do PIB da cidade: ");
        scanf("%lf", &pib);
    
        printf("\nDigite quantos pontos turisticos tem na cidade: ");
        scanf("%d", &pontos_turisticos);
    
        densidade_populacional = (double) populacao / area;
        pib_total = pib * 1000000000;
        pib_per_capita = pib_total / populacao;
    
        printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("\n🢃🢃🢃🢃 DADOS DA PRIMEIRA CARTA 🢃🢃🢃🢃\n");
    
        printf("\nEstado: %s", uf);
        printf("\nCódigo: %s%s", uf, codigo);
        printf("\nNome da cidade: %s", cidade);
        printf("\nPopulação: %lu", populacao);
        printf("\nÁrea: %.2lf km²", area);
        printf("\nPIB: R$%.2lf bilhões de reais", pib);
        printf("\nNúmero de pontos túristicos: %d", pontos_turisticos);
        printf("\nDensidade Populacional: %.2lf hab/km²", densidade_populacional);
        printf("\nPIB per Capita: %.2lf reais\n", pib_per_capita);
    
        // fim da primeira carta
    
        // início da segunda carta
    
        char uf2[3], cidade2[20], codigo2[3];
        int pontos_turisticos2;
        double densidade2, pib2, pib_total2, pib_per_capita2, area2;
        unsigned long int populacao2;
    
        printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("\n🢃🢃🢃🢃 INSIRA ABAIXO OS DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");
    
        printf("\nDigite as siglas do estado onde fica a cidade: ");
        scanf("%2s", uf2);
    
        printf("\nDigite o código da carta, escolha entre 01,02,03,04: ");
        scanf("%2s", codigo2);
    
        printf("\nDigite a cidade escolhida por você: ");
        scanf(" %19[^\n]", cidade2);
    
        printf("\nDigite o número de habitantes da cidade: ");
        scanf("%lu", &populacao2);
    
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
        printf("\n🢃🢃🢃🢃 DADOS DA SEGUNDA CARTA 🢃🢃🢃🢃\n");
    
        printf("\nEstado: %s", uf2);
        printf("\nCódigo: %s%s", uf2, codigo2);
        printf("\nNome da cidade: %s", cidade2);
        printf("\nPopulação: %lu", populacao2);
        printf("\nÁrea: %.2lf km²", area2);
        printf("\nPIB: R$%.2lf bilhões de reais", pib2);
        printf("\nNúmero de pontos túristicos: %d", pontos_turisticos2);
        printf("\nDensidade Populacional: %.2lf hab/km²", densidade2);
        printf("\nPIB per Capita: %.2lf reais\n", pib_per_capita2);
    
        printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("\n🢃🢃🢃🢃 DADOS DA CARTA VENCEDORA 🢃🢃🢃🢃\n");

        int vitorias_carta1 = (populacao > populacao2) + (area > area2) + (pib > pib2) + (pontos_turisticos > pontos_turisticos2) + (densidade_populacional > densidade2) + (pib_per_capita > pib_per_capita2);
        int vitorias_carta2 = 6 - vitorias_carta1;

        printf("\nPopulação: %s venceu (%d)\n", (populacao > populacao2) ? "Carta 1" : "Carta 2", (populacao > populacao2));
        printf("Área: %s venceu (%d)\n", (area > area2) ? "Carta 1" : "Carta 2", (area > area2));
        printf("PIB: %s venceu (%d)\n", (pib > pib2) ? "Carta 1" : "Carta 2", (pib > pib2));
        printf("Pontos túristicos: %s venceu (%d)\n", (pontos_turisticos > pontos_turisticos2) ? "Carta 1" : "Carta 2", (pontos_turisticos > pontos_turisticos2));
        printf("Densidade Populacional: %s venceu (%d)\n", (densidade_populacional > densidade2) ? "Carta 1" : "Carta 2", (densidade_populacional > densidade2));
        printf("PIB per Capita: %s venceu (%d)\n", (pib_per_capita > pib_per_capita2) ? "Carta 1" : "Carta 2", (pib_per_capita > pib_per_capita2));        
        printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("Super Poder: Carta %d venceu (%d)\n", 1 + (vitorias_carta1 < vitorias_carta2), (vitorias_carta1 > vitorias_carta2) ? vitorias_carta1 : vitorias_carta2);

        printf("\n");
     

    return 0;
}
