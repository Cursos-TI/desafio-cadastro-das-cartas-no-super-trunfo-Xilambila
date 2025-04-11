#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Supertrunfo BRASIL - Pais escolhido para o desafio Mestre

    //Variáveis para a Carta 1
    unsigned long int populacao_c1;
    int p_turisticos_c1;
    float area_c1, pib_c1;
    char estado_c1;
    char codigo_c1[3]; 
    char cidade_c1[30] = "Teste Um";

    //Variáveis para a Carta 2
    unsigned long int populacao_c2;
    int p_turisticos_c2;
    float area_c2, pib_c2;
    char estado_c2;
    char codigo_c2[3];
    char cidade_c2[30] = "Teste Dois";



    printf("Cadastro de cartas do Super Trunfo - Paises\n"); //Abaixo no codigo esta configurado o Cadastro de cartas do Super Trunfo

    //Cadastro da Carta 01
    printf("CARTA 01\n");
    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado_c1);  // Espaço antes do %c ignora \n residual

    printf("Digite o nome da Cidade: ");
    scanf(" %30[^\n]", cidade_c1); // Lê até 30 caracteres (evita overflow)

    printf("Digite o codigo da Cidade (01-04): ");
    scanf(" %2s", codigo_c1); // Lê até 2 caracteres

    printf("Populacao: ");
    scanf("%lu", &populacao_c1);

    printf("Area (km²): ");
    scanf("%f", &area_c1);

    printf("PIB da cidade (em Bilhoes): ");
    scanf("%f", &pib_c1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &p_turisticos_c1);
    printf("\nCadastro concluído.\n");

    // CCadastro da Carta 02
    printf("CARTA 02\n");
    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado_c2); // Espaço antes do %c ignora \n residual

    printf("Digite o nome da Cidade: ");
    scanf(" %30[^\n]", cidade_c2); // Lê até 30 caracteres %30[^\n] (evita overflow)

    printf("Digite o codigo da Cidade (01-04): ");
    scanf(" %2s", codigo_c2); // Lê até 2 caracteres

    printf("Populacao: ");
    scanf("%ld", &populacao_c2);

    printf("Area (km²): ");
    scanf("%f", &area_c2);

    printf("PIB da cidade (em Bilhoes): ");
    scanf("%f", &pib_c2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &p_turisticos_c2);
    printf("\nCadastro concluído.\n");

    //Calculo de Densidade Populacional
    float densidade_populacional_c1 = (unsigned long)populacao_c1 / area_c1; // Densidade populacional carta 1
    float densidade_populacional_c2 = (unsigned long)populacao_c2 / area_c2; // Densidade populacional carta 2

        //inverso da densidade populacional
    
        float inverso_c2 = area_c2 / populacao_c2;
        float inverso_c1 = area_c1 / populacao_c1;


    //Calculo de PIB per Capta
    float pib_per_capta_c1 = (float) pib_c1 / populacao_c1; // PIB per capita carta 1
    float pib_per_capta_c2 = (float) pib_c2 / populacao_c2; // PIB per capita carta 2

    // Calculo do Super Poder
    
    //Superpoder Carta 01
    float spc1 = (float) populacao_c1 + (float) area_c1 + (float) pib_c1 + (float) p_turisticos_c1 + (float) pib_per_capta_c1 + (float) inverso_c1;

    //Superpoder Carta 02
    float spc2 = (float) populacao_c2 + (float) area_c2 + (float) pib_c2 + (float) p_turisticos_c2 + (float) pib_per_capta_c2 + (float) inverso_c2;


    // Exibição dos dados 
    printf ("------------------------------------------------------\n");
    printf("\nSuper Trunfo Países:\n");
    printf ("Carta 01\n");
    printf ("Estado: %c\n", estado_c1);
    printf ("Codigo: %c%.2s\n", estado_c1, codigo_c1);
    printf ("Nome da Cidade: %s\n", cidade_c1);
    printf ("Populacao: %ld habitantes\n", populacao_c1);
    printf ("Area: %.2f km²\n", area_c1);
    printf ("PIB: %.2f Bilhoes de Reais\n", pib_c1);
    printf ("Numero de Pontos Turisticos: %d\n", p_turisticos_c1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c1);
    printf ("PIB per Capta: %.2f Bilhoes de Reais\n", pib_per_capta_c1);
    printf ("Espaço livre por habitantes (quanto mais espaço melhor qualidade de vida: %.2f km²/habitante)\n", inverso_c1);
    printf ("------------------------------------------------------\n");

    printf("\nSuper Trunfo Países:\n");
    printf ("Carta 02\n");
    printf ("Estado: %c\n", estado_c2);
    printf ("Codigo: %c%.2s\n", estado_c2, codigo_c2);
    printf ("Nome da Cidade: %s\n", cidade_c2);
    printf ("Populacao: %ld habitantes\n", populacao_c2);
    printf ("Area: %.2f km²\n", area_c2);
    printf ("PIB: %.2f Bilhoes de Reais\n", pib_c2);
    printf ("Numero de Pontos Turisticos: %d\n", p_turisticos_c2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c2);
    printf ("PIB per Capta: %.2f Bilhoes de Reais\n", pib_per_capta_c2);
    printf ("Espaço livre por habitantes (quanto mais espaço melhor qualidade de vida: %.2f km²/habitante)\n", inverso_c2);
    printf ("------------------------------------------------------\n");

    //Comparar as cartas 01 com a 02
    printf ("------------------------------------------------------\n");
    printf ("Super Poderes:\n");
    printf ("Super Poder Carta 01: %.2f\n", spc1);
    printf ("Super Poder Carta 02: %.2f\n", spc2);
    printf ("------------------------------------------------------\n");
    
    //Comparar os Status

    printf ("------------------------------------------------------\n");
    printf ("Comparação entre os Status:\n");
    printf ("Regra: Apos a comparaçao a carta que receber o numero 1 é a carta que ganhou\n");
    printf ("------------------------------------------------------\n");
    printf ("Super Trunfo - A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", spc1 > spc2, spc2 > spc1, spc1 == spc2);
    printf ("Populaçao- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", populacao_c1 > populacao_c2, populacao_c2 > populacao_c1, populacao_c1 == populacao_c2);
    printf ("Area- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", area_c1 > area_c2, area_c2 > area_c1, area_c1 == area_c2);
    printf ("PIB- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", pib_c1 > pib_c2, pib_c2 > pib_c1, pib_c1 == pib_c2);
    printf ("Pontos Turisticos- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", p_turisticos_c1 > p_turisticos_c2, p_turisticos_c2 > p_turisticos_c1, p_turisticos_c1 == p_turisticos_c2);
    printf ("Densidade Populacional- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", densidade_populacional_c1 > densidade_populacional_c2, densidade_populacional_c2 > densidade_populacional_c1, densidade_populacional_c1 == densidade_populacional_c2);
    printf ("PIB per Capta- A carta 01 é a vencedora? %d / A carta 02 é a vencedora? %d / Empatou? %d\n", pib_per_capta_c1 > pib_per_capta_c2, pib_per_capta_c2 > pib_per_capta_c1, pib_per_capta_c1 == pib_per_capta_c2);
    printf ("------------------------------------------------------\n");
    printf ("--------------------------Fim-------------------------\n");

    
    return 0;
}
