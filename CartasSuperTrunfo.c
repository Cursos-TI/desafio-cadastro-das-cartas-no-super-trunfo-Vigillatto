#include <stdio.h>

// Definindo uma estrutura para armazenar os dados de cada carta
typedef struct {
    char estado;            // Estado: A a H
    char codigo[5];         // Código da carta: ex. A01, B03
    char nomeCidade[100];   // Nome da cidade
    int populacao;          // População da cidade
    float area;             // Área da cidade em km²
    float pib;              // PIB da cidade
    int pontosTuristicos;   // Número de pontos turísticos na cidade
} Carta;

// Função para imprimir os dados de uma carta
void imprimirCarta(Carta carta) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    // Criando duas variáveis do tipo Carta para armazenar as cartas inseridas pelo usuário
    Carta carta1, carta2;

    // Inserindo os dados da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &carta1.estado);  // Espaço antes do %c para capturar qualquer caractere em buffer
    printf("Código da Carta (ex. A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade);  // Lê até a nova linha
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Inserindo os dados da segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex. A01): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Imprimindo os dados das duas cartas
    printf("\nDetalhes das Cartas Inseridas:\n");

    // Exibindo a carta 1
    imprimirCarta(carta1);
    
    // Exibindo a carta 2
    imprimirCarta(carta2);

    return 0;
}