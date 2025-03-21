#include <stdio.h>

int main(){                                                                     //Acrescentando as variáveis
    char estado[10];
    char codigo[10];
    char nome_cidade[20];
    float populacao;
    float area;
    float PIB;
    float pontos_turisticos;
    char resposta[10];

    printf("Olá, Bem-Vindo(a) ao jogo Cartas Super Trunfo!\n");                 //Início dos comandos e das entradas de dados.

    printf("Podemos começar com o estado, você podera escolher de A à H.\n");
    printf(" Qual deseja escolher? ");
    scanf("%s", &estado);

    printf("Agora, escolha um código da carta, que pode ser de 'A01' à 'A04': ");
    scanf("%s", &codigo);

    printf("O nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("A quantidade de cidadões: ");
    scanf("%f", &populacao);

    printf("Quantos km² tem: ");
    scanf("%f", &area);

    printf("Quanto é o PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB);

    printf("Por ultimo, a quantidade de pontos turísticos: ");
    scanf("%f", &pontos_turisticos);
    printf("\n");

    printf("Agora vamos as Cartas\n");                                  //Aqui vai ser aonde vai começar a ser exibido os dados que foram determinados.
    printf("\n");

    printf("Carta 1\n");

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da cidade: %s\n", nome_cidade);

    printf("População: %.0f pessoas.\n", populacao);

    printf("Área: %.2fKm²\n", area);

    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB);

    printf("Quantidade de pontos turísticos: %.0f\n", pontos_turisticos);
    printf("\n");
    printf("\n");                                                       //E aqui é onde termina os dados que foram determinados


    printf("Deseja jogar novamente? ");                                  //Aqui eu não sabia o que fazer, então decidi fazer uma espécie de ""Round 2""
    scanf("%s", &resposta);
    printf("%s!? Então vamos lá.\n", resposta);
    printf("\n");
    printf("\n");

    
    
    printf("Escolha o estado (A à H): ");                                 //Recomeçando os dados
    scanf("%s", &estado);

    printf("Escolha um código da carta (A01 à A04): ");
    scanf("%s", &codigo);

    printf("O nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("A quantidade de cidadões: ");
    scanf("%f", &populacao);

    printf("Quantos km² tem: ");
    scanf("%f", &area);

    printf("Quanto é o PIB (Produto Interno Bruto): ");
    scanf("%f", &PIB);

    printf("Por ultimo, a quantidade de pontos turísticos: ");
    scanf("%f", &pontos_turisticos);
    printf("\n");

    printf("Agora vamos as Cartas\n");                                  //Aqui vai ser aonde vai começar a ser exibido os dados que foram determinados.
    printf("\n");

    printf("Carta 1\n");

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da cidade: %s\n", nome_cidade);

    printf("População: %.0f pessoas.\n", populacao);

    printf("Área: %.2fKm²\n", area);

    printf("PIB (Produto Interno Bruto): R$%.2f\n", PIB);

    printf("Quantidade de pontos turísticos: %.0f\n", pontos_turisticos);
    printf("\n");
    printf("\n");                                                        //E aqui é onde termina os dados que foram determinados


    //Se tudo der certo, vai ser possível colocar os dados de duas cartas sem reiniciar a linha de códigos.

    //Fiz esse programa no Visual Studio, por que no GitHub estava dando erro toda vez

    return 0;

}