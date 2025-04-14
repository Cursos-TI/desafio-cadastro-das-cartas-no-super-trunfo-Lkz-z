#include <stdio.h>

int main(){                             //Acrescentando as variáveis
    char estado[10];
    char codigo[10];
    char nome_cidade[20];
    float populacao;
    float area;
    float PIB;
    double pontos_turisticos;

    char Y;                             //Somente para que as informações na hora da comparação saiam tudo junto.


    printf("Olá, Bem-Vindo(a) ao jogo Cartas Super Trunfo!\n");                 //Início dos comandos e das entradas de dados.

    printf("Podemos começar com o estado, você podera escolher de A à H.\n");
    printf(" Qual deseja escolher? ");
    scanf("%s", &estado);

    printf("Agora, escolha um código da carta, que pode ser de 'A01' à 'A04': ");
    scanf("%s", &codigo);

    printf("O nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("A quantidade de cidadãos: ");
    scanf("%f", &populacao);

    printf("Quantos km² tem: ");
    scanf("%f", &area);

    printf("Quanto é o PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB);

    printf("Por ultimo, a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("\n");

    
    float densidade_p = populacao / area;
    float pib_per_cap = PIB / populacao;
    float super_poder = populacao + area + PIB + pontos_turisticos + (1.0 / densidade_p) + pib_per_cap;


    printf("Agora vamos as Cartas\n");                                  //Aqui vai ser aonde vai começar a ser exibido os dados que foram determinados.
    printf("\n");

    printf("Carta 1\n");

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da cidade: %s\n", nome_cidade);

    printf("População: %.0f pessoas.\n", populacao);

    printf("Área: %.2fKm²\n", area);

    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB);

    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_p);

    printf("PIB per capita: R$%.2f\n", pib_per_cap);

    printf("Super Poder: %.2f de poder!\n", super_poder);
    printf("\n");
    printf("\n");



    printf("Hora de registramos a segunda carta\n");                               //Recomeçaando o registramento de outra carta para a comparação.
    printf("\n");


    char estado2[10];
    char codigo2[10];
    char nome_cidade2[20];
    float populacao2;
    float area2;
    float PIB2;
    double pontos_turisticos2;
    
    
    printf("Escolha o estado (A à H): ");
    scanf("%s", &estado2);

    printf("Escolha um código da carta (A01 à A04): ");
    scanf("%s", &codigo2);

    printf("O nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("A quantidade de cidadãos: ");
    scanf("%f", &populacao2);

    printf("Quantos km² tem: ");
    scanf("%f", &area2);

    printf("Quanto é o PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB2);

    printf("Por ultimo, a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");


    float densidade_p2 = populacao2 / area2;
    float pib_per_cap2 = PIB2 / populacao2;
    float super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + (1.0 / densidade_p2) + pib_per_cap2;


    printf("Agora vamos para Carta 2\n");
    printf("\n");

    printf("Carta 2\n");

    printf("Estado: %s\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da cidade: %s\n", nome_cidade2);

    printf("População: %.0f pessoas.\n", populacao2);

    printf("Área: %.2fKm²\n", area2);

    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB2);

    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_p2);

    printf("PIB per capita: R$%.2f\n", pib_per_cap2);

    printf("Super Poder: %.2f de poder!\n", super_poder2);    
    printf("\n");
    printf("\n");

    printf("Prosseguir para a comparação?");
    scanf("%s", &Y);
    printf("\n");
    printf("\n");


    printf("Comparação das cartas.\n");                     //Comparação das cartas.
    printf("\n");

    printf("População: Carta %d ganhou!\n", populacao > populacao2);

    printf("Área: Carta %d ganhou!\n",  area > area2);

    printf("PIB (Produto Interno Bruto): Carta %d ganhou!\n", PIB > PIB2);

    printf("Quantidade de pontos turísticos: Carta %d ganhou!\n", pontos_turisticos > pontos_turisticos2);

    printf("Densidade Populacional: Carta %d ganhou!\n", densidade_p > densidade_p2);

    printf("PIB per capita: Carta %d ganhou!\n", pib_per_cap > pib_per_cap2);

    printf("Super Poder: Carta %d ganhou!\n", super_poder > super_poder2);

    return 0;       //Obrigado!

}