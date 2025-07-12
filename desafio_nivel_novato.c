#include <stdio.h>

int main()
{
    char estado_1, estado_2;
    char codigo_da_carta_1[3], codigo_da_carta_2[3];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int numero_pontos_turisticos_1, numero_pontos_turisticos_2;

    // Campo para digitar a letra do estado da carta 1
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_1);

    // Campo para digitar o código da carta 1
    printf("Agora digite o código da carta: ");
    scanf("%s", codigo_da_carta_1);

    // Campo para digitar o nome da cidade da carta 1 (obs: não coloque espaço no nome, pois estou usando o scanf e não o fgets!! Ou escreva tudo junto ex: MinasGerais ou com hifén ou underline ex: Minas_Gerais)
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);

    // Campo para digitar o total de população da carta 1
    printf("Digite o total de população: ");
    scanf("%d", &populacao_1);

    // Campo para digitar a área da carta 1
    printf("Digite a área (em km²): ");
    scanf("%f", &area_1);

    // Campo para digitar o PIB da carta 1
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib_1);

    // Campo para digitar a quantidade de pontos turísticos da carta 1
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_1);

    // Uma simples mensagem de sucesso após criar a primeira carta, seguida de uma indicação pra criação da segunda carta
    printf("-----------------------------------------\n");
    printf("Carta 1 criada com sucesso!!!\n");
    printf("Agora vamos criar a segunda carta!\n");
    printf("-----------------------------------------\n");

    // Campo para digitar a letra do estado da carta 2
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado_2);

    // Campo para digitar o código da carta 2
    printf("Agora digite o código da carta: ");
    scanf("%s", codigo_da_carta_2);

    // Campo para digitar o nome da cidade da carta 2 (obs: não coloque espaço no nome, pois estou usando o scanf e não o fgets!! Ou escreva tudo junto ex: MinasGerais ou com hifén ou underline ex: Minas_Gerais)
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_2);

    // Campo para digitar o total de população da carta 2
    printf("Digite o total da população: ");
    scanf("%d", &populacao_2);

    // Campo para digitar a área da carta 2
    printf("Digite a área (em km²): ");
    scanf("%f", &area_2);

    // Campo para digitar o PIB da carta 2
    printf("Digite o PIB (Produito Interno Bruto): ");
    scanf("%f", &pib_2);

    // Campo para digitar a quantidade de pontos turísticos da carta 2
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_2);

    // Uma simples mensagem de sucesso após criar a segunda carta, seguida de uma indicação para mostrar as informações de cada carta
    printf("-----------------------------------------\n");
    printf("Carta 2 criada com sucesso!!!\n");
    printf("Agora vamos mostrar as informações de cada carta:\n");
    printf("-----------------------------------------\n");

    //Mostrando as informações da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c%s\n", estado_1, codigo_da_carta_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %f km²\n", area_1);
    printf("PIB: %f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_1);

    //uma linha tracejada para separar as informações de cada carta
    printf("-----------------------------------------\n");

    //Mostrando as informações da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n", estado_2, codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %f km²\n", area_2);
    printf("PIB: %f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_2);
}