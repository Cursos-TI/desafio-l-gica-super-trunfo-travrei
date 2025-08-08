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


    int escolhaComparacao = 0;

    //Menu
    printf("As Opções para comparação são:\n");
    printf("1 - Nome da Cidade (Apenas para vizualização das Cartas)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Qual sua escolha: ");
    scanf("%d", &escolhaComparacao);

    switch (escolhaComparacao)
    {
    case 1:
        //TODO
        break;
    case 2:
        if (populacao1 > populacao2) {
            printf("Comparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);
            printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
        } else if (populacao1 == populacao2){
            printf("Comparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);
            printf("Resultado: Empate\n");
        } 
        else {
            printf("Comparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);
            printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 3:
        if (area_cidade1 > area_cidade2) {
            printf("Comparação de cartas (Atributo: Area)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, area_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, area_cidade2);
            printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
        } else if (area_cidade1 == area_cidade2){
            printf("Comparação de cartas (Atributo: Area)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, area_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, area_cidade2);
            printf("Resultado: Empate\n");
        } 
        else {
            printf("Comparação de cartas (Atributo: Area)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, area_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, area_cidade2);
            printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 4:
        if (pib_cidade1 > pib_cidade2) {
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, pib_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, pib_cidade2);
            printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
        } else if (pib_cidade1 == pib_cidade2){
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, pib_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, pib_cidade2);
            printf("Resultado: Empate\n");
        } 
        else {
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, pib_cidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, pib_cidade2);
            printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;  
    case 5:
        if (n_pont_turisticos1 > n_pont_turisticos2) {
            printf("Comparação de cartas (Atributo: Número de Pontos Turisticos)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, n_pont_turisticos1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, n_pont_turisticos2);
            printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
        } else if (n_pont_turisticos1 == n_pont_turisticos2){
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, n_pont_turisticos1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, n_pont_turisticos2);
            printf("Resultado: Empate\n");
        } 
        else {
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, n_pont_turisticos1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, n_pont_turisticos2);
            printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;  
    case 6:
        if (densidade1 < densidade2) {
            printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, densidade2);
            printf("Resultado: A Carta 1 (%s) Venceu!", nome_cidade1);
        } else if (densidade1 == densidade2){
            printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, n_pont_turisticos1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, n_pont_turisticos2);
            printf("Resultado: Empate\n");
        } else {
            printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, densidade2);
            printf("Resultado: A Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;  
        
    default:
        break;
    }

    

    return 0;
}
