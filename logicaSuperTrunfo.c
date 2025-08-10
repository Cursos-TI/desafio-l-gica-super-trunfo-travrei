#include <stdio.h>
#include <string.h>

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
    char estado1[3];
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1, n_pont_turisticos1;
    float area_cidade1, pib_cidade1, densidade1, pip_per_capita1, atributo1_carta1, atributo2_carta1;

    char estado2[3];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2, n_pont_turisticos2;
    float area_cidade2, pib_cidade2, densidade2, pip_per_capita2, atributo1_carta2, atributo2_carta2;

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

    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

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

    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km² da Cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_cidade2);

    printf("Digite o número de Pontos turísticos: ");
    scanf("%d", &n_pont_turisticos2);
    
    //Retiro o jogo caso um destes seja 0, pois impossibilitaria a divisão.
    if (populacao1 == 0 || populacao2 == 0 || area_cidade1 == 0 || area_cidade2 == 0 || pib_cidade1 == 0 || pib_cidade2 == 0) {
        printf("Acho que cidades fantasmas não podem participar!\n");
        return 1;
    }

    //Calculo de Densidade Populacional
    densidade1 = (float)populacao1 / area_cidade1;
    densidade2 = (float)populacao2 / area_cidade2;

    //Calculo Pip Per Capita
    pip_per_capita1 = pib_cidade1 * 1000000000.0f / (float)populacao1;
    pip_per_capita2 = pib_cidade2 * 1000000000.0f / (float)populacao2;


    int escolha1 = 0, escolha2 = 0;
    char escolha_att1[50], escolha_att2[50];

    //Menu 1
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Nome da Cidade (Apenas para vizualização das Cartas)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Qual sua escolha: ");
    scanf("%d", &escolha1);

    //Menu 2
    if(escolha1 != 1){
        printf("Escolha o SEGUNDO atributo para comparar:\n");
        if(escolha1 != 2){printf("2 - População\n");}
        if(escolha1 != 3){printf("3 - Área\n");}
        if(escolha1 != 4){printf("4 - PIB\n");}
        if(escolha1 != 5){printf("5 - Número de Pontos Turísticos\n");}
        if(escolha1 != 6){printf("6 - Densidade Demográfica\n");}
        printf("Qual sua escolha: ");
        scanf("%d", &escolha2);
    }
    

    //Erro para caso o jogador escolha a mesma coisa!
    if (escolha1 == escolha2){
        printf("A escolha dos atributos não podem ser iguais \n");
        return 1; //Código de erro
    }


    //Switch para o primeiro MENU!
    switch (escolha1)
    {
    case 1:
        printf("------------------------\n");
        printf("Carta 1: %s%s, %s\n", estado1, codigo_carta1, nome_cidade1);
        printf("ATRIBUTOS:\n");
        printf("->POPULAÇÃO: %d habitantes\n", populacao1);
        printf("->AREA: %.2f km²\n", area_cidade1);
        printf("->PIB: %.2f Bilhões de Reaisn", pib_cidade1);
        printf("->Numero de Pontos Turisticos: %d\n", n_pont_turisticos1);
        printf("->Densidade Demografica: %.2f\n", densidade1);
        printf("------------------------\n");
        printf("->Carta 2: %s%s, %s\n", estado2, codigo_carta2, nome_cidade2);
        printf("->ATRIBUTOS:\n");
        printf("->POPULAÇÃO: %d habitantes\n", populacao2);
        printf("->AREA: %.2f km²\n", area_cidade2);
        printf("->PIB: %.2f Bilhões de Reais\n", pib_cidade2);
        printf("->Numero de Pontos Turisticos: %d\n", n_pont_turisticos2);
        printf("->Densidade Demografica: %.2f\n", densidade2);
        printf("------------------------\n");
        return 0;
        break;
    case 2:
        strcpy(escolha_att1, "População");
        atributo1_carta1 = (float)populacao1;
        atributo1_carta2 = (float)populacao2;
        break;
    case 3:
        strcpy(escolha_att1, "Area");
        atributo1_carta1 = area_cidade1;
        atributo1_carta2 = area_cidade2;
        break;
    case 4:
        strcpy(escolha_att1, "PIB");
        atributo1_carta1 = pib_cidade1;
        atributo1_carta2 = pib_cidade2;
        break;  
    case 5:
        strcpy(escolha_att1, "Número de Pontos Turisticos");
        atributo1_carta1 = (float)n_pont_turisticos1;
        atributo1_carta2 = (float)n_pont_turisticos2;
        break;  
    case 6:
        strcpy(escolha_att1, "Densidade Demografica");
        atributo1_carta1 = densidade1;
        atributo1_carta2 = densidade2;
        break;  
        
    default:
        break;
    }

    switch (escolha2)
    {
    case 1:
        break;
    case 2:
        strcpy(escolha_att2, "População");
        atributo2_carta1 = (float)populacao1;
        atributo2_carta2 = (float)populacao2;
        break;
    case 3:
        strcpy(escolha_att2, "Area");
        atributo2_carta1 = area_cidade1;
        atributo2_carta2 = area_cidade2;
        break;
    case 4:
        strcpy(escolha_att2, "PIB");
        atributo2_carta1 = pib_cidade1;
        atributo2_carta2 = pib_cidade2;
        break;  
    case 5:
        strcpy(escolha_att2, "Número de Pontos Turisticos");
        atributo2_carta1 = (float)n_pont_turisticos1;
        atributo2_carta2 = (float)n_pont_turisticos2;
        break;  
    case 6:
        strcpy(escolha_att2, "Densidade Demografica");
        atributo2_carta1 = densidade1;
        atributo2_carta2 = densidade2;
        break;  
        
    default:
        break;
    }

    //Logica de Comparação

    float soma1 = 0.0, soma2 = 0.0;
    int rodada1 = 0, rodada2 = 0;
    //Carta 1 = 1; Carta 2 = 2; Empate = 0;

    soma1 = atributo1_carta1 + atributo2_carta1;
    soma2 = atributo1_carta2 + atributo2_carta2; 

    printf("Carta 1: %s (%s) - Código: %s\n", nome_cidade1, estado1, codigo_carta1);
    printf(" - %s = %.2f\n", escolha_att1, atributo1_carta1);
    printf(" - %s = %.2f\n", escolha_att2, atributo2_carta1);
    printf(" -> Soma dos Atributos: %.2f\n", soma1);
    printf("--------\n");
    printf("Carta 1: %s (%s) - Código: %s\n", nome_cidade2, estado2, codigo_carta2);
    printf(" - %s = %.2f\n", escolha_att1, atributo1_carta2);
    printf(" - %s = %.2f\n", escolha_att2, atributo2_carta2);
    printf(" -> Soma dos Atributos: %.2f\n", soma2);
    printf("--------\n");

    if (escolha1 == 6){
        if (atributo1_carta1 > atributo1_carta2){
            rodada1 = 2;
            printf("Na comparação do atributo %s, Ganha a Carta2!\n", escolha_att1);
        } else if(atributo1_carta1 < atributo1_carta2){
            rodada1 = 1;
            printf("Na comparação do atributo %s, Ganha a Carta1!\n", escolha_att1);
        } else {
           printf("Na comparação do atributo %s, Deu empate!\n", escolha_att1);
        }
    } else {
        if (atributo1_carta1 > atributo1_carta2){
            rodada1 = 1;
            printf("Na comparação do atributo %s, Ganha a Carta1!\n", escolha_att1);
        } else if (atributo1_carta2 > atributo1_carta1) {
            rodada1 = 2;
            printf("Na comparação do atributo %s, Ganha a Carta2!\n", escolha_att1);
        } else {
            printf("Na comparação do atributo %s, Deu empate!\n", escolha_att1);
        }
    }
    if (escolha2 == 6){
        if (atributo2_carta1 > atributo2_carta2){
            rodada2 = 2;
            printf("Na comparação do atributo %s, Ganha a Carta2!\n", escolha_att2);
        } else if(atributo2_carta1 < atributo2_carta2){
            rodada2 = 1;
            printf("Na comparação do atributo %s, Ganha a Carta1!\n", escolha_att2);
        } else {
           printf("Na comparação do atributo %s, Deu empate!\n", escolha_att2);
        }
    } else {
        if (atributo2_carta1 > atributo2_carta2){
            rodada2 = 1;
            printf("Na comparação do atributo %s, Ganha a Carta1!\n", escolha_att2);
        } else if (atributo2_carta2 > atributo2_carta1) {
            rodada2 = 2;
            printf("Na comparação do atributo %s, Ganha a Carta2!\n", escolha_att2);
        } else {
            printf("Na comparação do atributo %s, Deu empate!\n", escolha_att2);
        }
    }
    
    printf("\n--- Vencedor da Rodada --- \n");    
    if (rodada1 == 1 && rodada2 == 1) {
        printf(">>> A CARTA 1 venceu a rodada (ganhou nos dois atributos)! <<<\n");    
    } else if (rodada1 == 2 && rodada2 == 2) {
        printf(">>> A CARTA 2 venceu a rodada (ganhou nos dois atributos)! <<<\n"); 
    } else {
        printf(">>> A RODADA TERMINOU EM EMPATE! <<<\n");    
    }      

    if (soma1 > soma2){
        printf("Na Comparação de Soma dos atributos, Ganha a Carta 1\n");
    } else if (soma1 < soma2){
        printf("Na Comparação de Soma dos atributos, Ganha a Carta 2\n");
    } else {
        printf("Na Comparação de Soma dos atributos, EMPATE!\n");
    }

    return 0;
}
