#include <stdio.h>

int main()
{
    char estado_1, estado_2;
    char codigo_da_carta_1[3], codigo_da_carta_2[3];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    signed long int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int numero_pontos_turisticos_1, numero_pontos_turisticos_2;
    float densidade_populacional_1, densidade_populacional_2;
    float inverso_densidade_populacional_1, inverso_densidade_populacional_2;
    float pib_per_capita_1, pib_per_capita_2;
    float super_poder_1, super_poder_2;
    int opcao1, quantidadeComparacao, propriedadeComparacao1, propriedadeComparacao2, pontosCarta1, pontosCarta2, resultado1, resultado2;

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
    scanf("%ld", &populacao_1);

    // Campo para digitar a área da carta 1
    printf("Digite a área (em km²): ");
    scanf("%f", &area_1);

    // Campo para digitar o PIB da carta 1
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib_1);

    // Campo para digitar a quantidade de pontos turísticos da carta 1
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_1);

    // Calculando a densidade populacional da carta 1
    densidade_populacional_1 = (float)populacao_1 / area_1;

    // Calculando o PIB per Capita da carta 1
    pib_per_capita_1 = (float)(pib_1 * 1000000000) / populacao_1;

    // Calculando o inverso da densidade populacional da carta 1
    inverso_densidade_populacional_1 = 1 / densidade_populacional_1;

    // Calculando o super poder da carta 1
    super_poder_1 = (long double)populacao_1 + area_1 + pib_1 + (float)numero_pontos_turisticos_1 + pib_per_capita_1 + inverso_densidade_populacional_1;

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
    scanf("%ld", &populacao_2);

    // Campo para digitar a área da carta 2
    printf("Digite a área (em km²): ");
    scanf("%f", &area_2);

    // Campo para digitar o PIB da carta 2
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib_2);

    // Campo para digitar a quantidade de pontos turísticos da carta 2
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_2);

    // Calculando a densidade populacional da carta 2
    densidade_populacional_2 = (float)populacao_2 / area_2;

    // Calculando o PIB per Capita da carta 2
    pib_per_capita_2 = (float)(pib_2 * 1000000000) / populacao_2;

    // Calculando o inverso da densidade populacional da carta 2
    inverso_densidade_populacional_2 = 1 / densidade_populacional_2;

    // Calculando o super poder da carta 2
    super_poder_2 = (long double)populacao_2 + area_2 + pib_2 + (float)numero_pontos_turisticos_2 + pib_per_capita_2 + inverso_densidade_populacional_2;

    // Uma simples mensagem de sucesso após criar a segunda carta, seguida de uma indicação para mostrar as informações de cada carta
    printf("-----------------------------------------\n");
    printf("Carta 2 criada com sucesso!!!\n");
    printf("Agora vamos comparar as informações de cada carta:\n");
    printf("-----------------------------------------\n");

    // comparação das cartas

    // Mensagens para inicio de jogo
    printf("------ SUPER TRUNFO ------ \n");
    printf("1. Iniciar Jogo\n");
    printf("2. Sair Do Jogo\n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Quantas opções você deseja comparar? (1 - 6)");
        scanf("%d", &quantidadeComparacao);

        quantidadeComparacao < 1 || quantidadeComparacao > 6 ? printf("Por favor escolha uma quantidade de 1 a 2") : printf("Quantidade válida!");

        if (quantidadeComparacao == 1)
        {
            printf("Ótimo você desejou comparar %d propriedades, qual você deseja comparar?\n", quantidadeComparacao);
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB Per Capita\n");
            scanf("%d", &propriedadeComparacao1);

            switch (propriedadeComparacao1)
            {
            case 1:
                resultado1 = populacao_1 > populacao_2 ? 1 : 0;
                break;
            case 2:
                resultado1 = area_1 > area_2 ? 1 : 0;
                break;
            case 3:
                resultado1 = pib_1 > pib_2 ? 1 : 0;
                break;
            case 4:
                resultado1 = numero_pontos_turisticos_1 > numero_pontos_turisticos_2 ? 1 : 0;
                break;
            case 5:
                resultado1 = inverso_densidade_populacional_1 < inverso_densidade_populacional_2 ? 1 : 0;
                break;
            case 6:
                resultado1 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida");
                break;
            }

            printf("----- RESULTADO ------\n");
            if (resultado1 == 1)
            {
                printf("A cidade %s ganhou", nome_da_cidade_1);
                pontosCarta1++;
                 printf("Você escolheu a propriedade de número: %d", propriedadeComparacao1);
            }
            else
            {
                printf("A cidade %s ganhou", nome_da_cidade_2);
                pontosCarta2++;
                 printf("Você escolheu a propriedade de número: %d", propriedadeComparacao1);
            }
           
        }
        else if (quantidadeComparacao == 2)
        {
            printf("Ótimo você desejou comparar %d propriedades, quais você deseja comparar?\n", quantidadeComparacao);
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB Per Capita\n");
            scanf("%d", &propriedadeComparacao1);
            scanf("%d", &propriedadeComparacao2);

            if (propriedadeComparacao1 == propriedadeComparacao2)
            {
                printf("Você escolheu as mesmas propriedades!");
            }
            else
            {
                switch (propriedadeComparacao1)
                {
                case 1:
                    resultado1 = populacao_1 > populacao_2 ? 1 : 0;
                    break;
                case 2:
                    resultado1 = area_1 > area_2 ? 1 : 0;
                    break;
                case 3:
                    resultado1 = pib_1 > pib_2 ? 1 : 0;
                    break;
                case 4:
                    resultado1 = numero_pontos_turisticos_1 > numero_pontos_turisticos_2 ? 1 : 0;
                    break;
                case 5:
                    resultado1 = inverso_densidade_populacional_1 < inverso_densidade_populacional_2 ? 1 : 0;
                    break;
                case 6:
                    resultado1 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
                    break;
                default:
                    printf("Opção inválida");
                    break;
                }

                printf("----- RESULTADO ------\n");
                if (resultado1 == 1)
                {
                    printf("A cidade %s ganhou", nome_da_cidade_1);
                    pontosCarta1++;
                    printf("Você escolheu a propriedade de número: %d", propriedadeComparacao1);
                }
                else
                {
                    printf("A cidade %s ganhou", nome_da_cidade_2);
                    pontosCarta2++;
                    printf("Você escolheu a propriedade de número: %d", propriedadeComparacao1);
                }
                
            }

            switch (propriedadeComparacao2)
            {
            case 1:
                resultado2 = populacao_1 > populacao_2 ? 1 : 0;
                break;
            case 2:
                resultado2 = area_1 > area_2 ? 1 : 0;
                break;
            case 3:
                resultado2 = pib_1 > pib_2 ? 1 : 0;
                break;
            case 4:
                resultado2 = numero_pontos_turisticos_1 > numero_pontos_turisticos_2 ? 1 : 0;
                break;
            case 5:
                resultado2 = inverso_densidade_populacional_1 < inverso_densidade_populacional_2 ? 1 : 0;
                break;
            case 6:
                resultado2 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida");
                break;
            }

            printf("----- RESULTADO ------\n");
            if (resultado2 == 1)
            {
                printf("A cidade %s ganhou", nome_da_cidade_1);
                pontosCarta1++;
                printf("Você escolheu a propriedade de número: %d", propriedadeComparacao2);
            }
            else
            {
                printf("A cidade %s ganhou", nome_da_cidade_2);
                pontosCarta2++;
                printf("Você escolheu a propriedade de número: %d", propriedadeComparacao2);
            }
            
            printf("O total de pontos da carta 1 é: %d e o da carta 2 é %d", pontosCarta1, pontosCarta2);
            if (pontosCarta1 > pontosCarta2)
            {
                printf("Carta 1 venceu");
            } else if (pontosCarta1 == pontosCarta2){
                printf("Houve um empate");
            } else {
                printf("Carta 2 Venceu");
            }
            
        }

        break;

    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}