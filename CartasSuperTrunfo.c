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
    int populacao, p_turisticos;
    float area, pib;
    char estado;
    char[2] cidade;

    printf("Cadastro de cartas do Super Trunfo - Paises\n"); //Abaixo no codigo esta configurado o Cadastro de cartas do Super Trunfo

    printf("Digite a Letra do Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o numero da cidade (01-04): ");
    scanf("%c", &cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB da cidade (em Bilhoes): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &p_turisticos);

    //A partir deste ponto, exibimos os dados da carta computada.
    printf ("------------------------------------------------------\n");
    printf ("Codigo da Carta %c%.2c\n", estado, cidade);
    printf ("Populacao: %d\n", populacao);
    printf ("Area: %.2f km²\n", area);
    printf ("PIB: %.2f Bilhoes\n", pib);
    printf ("Pontos Turisticos: %d\n", p_turisticos);
    printf ("------------------------------------------------------\n");
    return 0;
}
