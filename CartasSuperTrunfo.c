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
    
    //Supertrunfo BRASIL - Pais escolhido para o desafio Iniciante
    int populacao_c1, p_turisticos_c1, populacao_c2, p_turisticos_c2;
    float area_c1, pib_c1, area_c2, pib_c2;
    char estado_c1, estado_c2;
    char codigo_c1[3]; 
    char cidade_c1[31] = "Teste Um";
    char codigo_c2[3];
    char cidade_c2[30] = "Teste Dois";



    printf("Cadastro de cartas do Super Trunfo - Paises\n"); //Abaixo no codigo esta configurado o Cadastro de cartas do Super Trunfo
    printf("CARTA 01\n");
    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado_c1);

    getchar();

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade_c1); // Lê a linha toda mesmo com espaco

    printf("Digite o codigo da Cidade (01-04): ");
    scanf(" %s", codigo_c1);

    printf("Populacao: ");
    scanf("%d", &populacao_c1);

    printf("Area (km²): ");
    scanf("%f", &area_c1);

    printf("PIB da cidade (em Bilhoes): ");
    scanf("%f", &pib_c1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &p_turisticos_c1);
    printf("\nCadastro concluído.\n");


    printf("CARTA 02\n");
    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado_c2);

    getchar();

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade_c2); // Lê a linha toda mesmo com espaco

    printf("Digite o codigo da Cidade (01-04): ");
    scanf(" %s", codigo_c2);

    printf("Populacao: ");
    scanf("%d", &populacao_c2);

    printf("Area (km²): ");
    scanf("%f", &area_c2);

    printf("PIB da cidade (em Bilhoes): ");
    scanf("%f", &pib_c2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &p_turisticos_c2);
    printf("\nCadastro concluído.\n");

    printf ("------------------------------------------------------\n");
    printf("\nSuper Trunfo Países:\n");
    printf ("Carta 01\n");
    printf ("Estado: %c\n", estado_c1);
    printf ("Codigo: %c%.2s\n", estado_c1, codigo_c1);
    printf ("Nome da Cidade: %s\n", cidade_c1);
    printf ("Populacao: %d\n", populacao_c1);
    printf ("Area: %.2f km²\n", area_c1);
    printf ("PIB: %.2f Bilhoes de Reais\n", pib_c1);
    printf ("Numero de Pontos Turisticos: %d\n", p_turisticos_c1);
    printf ("------------------------------------------------------\n");

    printf("\nSuper Trunfo Países:\n");
    printf ("Carta 02\n");
    printf ("Estado: %c\n", estado_c2);
    printf ("Codigo: %c%.2s\n", estado_c2, codigo_c2);
    printf ("Nome da Cidade: %s\n", cidade_c2);
    printf ("Populacao: %d\n", populacao_c2);
    printf ("Area: %.2f km²\n", area_c2);
    printf ("PIB: %.2f Bilhoes de Reais\n", pib_c2);
    printf ("Numero de Pontos Turisticos: %d\n", p_turisticos_c2);
    printf ("------------------------------------------------------\n");
    return 0;
}
