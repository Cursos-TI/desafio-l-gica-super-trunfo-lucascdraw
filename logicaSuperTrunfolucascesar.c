#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     char estado1[3], estado2[3];
    int codigo1, codigo2;
    char cidade1[50], cidade2[50];
    long long populacao1, populacao2;
    double area1, area2;
    long long pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro das Cartas:
    // Cadastro da Carta 1
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Digite a sigla do estado (2 letras): ");
    scanf("%2s", estado1);
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%lld", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%lf", &area1);
    printf("Digite o PIB: ");
    scanf("%lld", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da Carta 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Digite a sigla do estado (2 letras): ");
    scanf("%2s", estado2);
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%lld", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%lf", &area2);
    printf("Digite o PIB: ");
    scanf("%lld", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
      // Exibição das cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n");
    printf("CARTA 1: %s (%s) - Código: %d\n", cidade1, estado1, codigo1);
    printf("População: %lld hab | Área: %.2f km² | PIB: %lld | Pontos Turísticos: %d\n", 
           populacao1, area1, pib1, pontos_turisticos1);
    
    printf("\nCARTA 2: %s (%s) - Código: %d\n", cidade2, estado2, codigo2);
    printf("População: %lld hab | Área: %.2f km² | PIB: %lld | Pontos Turísticos: %d\n", 
           populacao2, area2, pib2, pontos_turisticos2);
    
    // Comparação de Cartas (por população - maior valor vence)
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Critério: Maior população\n");
    
    if (populacao1 > populacao2) {
        printf("VENCEDOR: %s (%s) com %lld habitantes\n", cidade1, estado1, populacao1);
        printf("PERDEDOR: %s (%s) com %lld habitantes\n", cidade2, estado2, populacao2);
    } 
    else if (populacao2 > populacao1) {
        printf("VENCEDOR: %s (%s) com %lld habitantes\n", cidade2, estado2, populacao2);
        printf("PERDEDOR: %s (%s) com %lld habitantes\n", cidade1, estado1, populacao1);
    }
    else {
        printf("EMPATE! Ambas as cidades têm %lld habitantes\n", populacao1);
    }
    
    return 0;
}
