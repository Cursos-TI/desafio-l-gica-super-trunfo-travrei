#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Limpar o buffer para retirar a quebra de linha -- Peguei do StackOverflow(https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf)
void flush_in(){
    int ch;
    while((ch=fgetc(stdin)) != EOF && ch != '\n'){}
}

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    // Cadastro das Cartas:
    //Declarando variáveis:
    char estado1[2];
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1, n_pont_turisticos1;
    float area_cidade1, pib_cidade1, densidade1, pip_per_capita1, super_poder1;

    char estado2[2];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2, n_pont_turisticos2;
    float area_cidade2, pib_cidade2, densidade2, pip_per_capita2,super_poder2;

    // Cadastro das Cartas:
    printf("Olá! Vamos iniciar o cadastramento das cartas!\n Vamos cadastrar a 1ª Carta!\n");

    printf("Digite o código do Estado: ");
    scanf("%s", estado1);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta1);
    flush_in();

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    flush_in();

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km² da Cidade: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_cidade1);

    printf("Digite o número de Pontos turísticos: ");
    scanf("%d", &n_pont_turisticos1);
    flush_in();

    printf("Vamos cadastrar a 2ª Carta!\n");

    printf("Digite o código do Estado: ");
    scanf("%s", estado2);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta2);
    flush_in();

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km² da Cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_cidade2);

    printf("Digite o número de Pontos turísticos: ");
    scanf("%d", &n_pont_turisticos2);

    //Calculo de Densidade Populacional
    densidade1 = (float)populacao1 / area_cidade1;
    densidade2 = (float)populacao2 / area_cidade2;

    //Calculo Pip Per Capita
    pip_per_capita1 = pib_cidade1 * 1000000000.0f / (float)populacao1;
    pip_per_capita2 = pib_cidade2 * 1000000000.0f / (float)populacao2;

    if (densidade1 < densidade2) {
        printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, densidade2);
        printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
    } else {
        printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, densidade2);
        printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
    }

    return 0;
}
