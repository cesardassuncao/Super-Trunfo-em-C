#include <stdio.h>

int main() {
    // --- Declaração das variáveis das cartas ---
    char estado1, codigo1[4], nomedaCidade1[20];
    unsigned long populacao1;
    float area1, densipopu1, inversoDensidade1, pib1, pibcapta1, superPoder1;
    int pturisticos1;

    char estado2, codigo2[4], nomedaCidade2[20];
    unsigned long populacao2;
    float area2, densipopu2, inversoDensidade2, pib2, pibcapta2, superPoder2;
    int pturisticos2;

    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;

    // --- Entrada de dados da Carta 1 ---
    printf("\nCadastrando sua primeira Carta!\n");
    printf("Digite o código da Carta (ex: A01): "); 
    scanf("%s", codigo1);
    printf("Digite o Estado (apenas a primeira letra, de A-H): "); 
    scanf(" %c", &estado1);
    printf("Digite o nome da Cidade (ex: RioDeJaneiro, sem espaços e açentos): "); 
    scanf("%s", nomedaCidade1);
    printf("Digite o número de habitantes da Cidade (ex: 6211223, sem pontuação): "); 
    scanf("%lu", &populacao1);
    printf("Digite a área da Cidade (em km², ex: 1255, arredondando para mais e sem pontuação): "); 
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade (em bilhões de reais, ex: 700.0): "); 
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Cidade (ex: 6): "); 
    scanf("%d", &pturisticos1);

    densipopu1 = (double) populacao1 / area1;
    inversoDensidade1 = area1 / populacao1;
    pibcapta1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pturisticos1 + pibcapta1 + inversoDensidade1;

    // --- Entrada de dados da Carta 2 ---
    printf("\nCadastrando sua segunda Carta!\n");
    printf("Digite o Código da Carta (ex: B01): "); 
    scanf("%s", codigo2);
    printf("Digite o Estado (apenas a primeira letra, de A-H): "); 
    scanf(" %c", &estado2);
    printf("Digite o nome da Cidade (ex: Niteroi, sem espaços e açentos): "); 
    scanf("%s", nomedaCidade2);
    printf("Digite o número de habitantes da Cidade (ex: 481749, sem pontuação): "); 
    scanf("%lu", &populacao2);
    printf("Digite a área da Cidade (em km², ex: 134, arredondando para mais e sem pontuação): "); 
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade (em bilhões de reais, ex: 10.8): "); 
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Cidade (ex: 5): "); 
    scanf("%d", &pturisticos2);

    densipopu2 = (double) populacao2 / area2;
    inversoDensidade2 = area2 / populacao2;
    pibcapta2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pturisticos2 + pibcapta2 + inversoDensidade2;

    // --- Saída da carta 1 ---
    printf("\n-------------------------------------\n");
    printf("Cadastrada sua primeira Carta!\n");
    printf("Código da Carta: %s \n", codigo1);
    printf("Primeira letra do Estado: %c \n", estado1);
    printf("Nome da Cidade: %s \n", nomedaCidade1);
    printf("Número de habitantes da Cidade: %lu \n", populacao1);
    printf("Área da Cidade: %.3f km² \n", area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu1);
    printf("PIB da Cidade: %.1f bilhões de reais \n", pib1);
    printf("PIB per Capita: %.2f reais \n", pibcapta1);
    printf("Quantidade de Pontos Turísticos: %d \n", pturisticos1);
    printf("Superpoder da Carta: %.3f \n", superPoder1);
    printf("-------------------------------------\n");

    // --- Saída da carta 2 ---
    printf("\n-------------------------------------\n");
    printf("Cadastrada sua segunda Carta!\n");
    printf("Código da Carta: %s \n", codigo2);
    printf("Primeira letra do Estado: %c \n", estado2);
    printf("Nome da Cidade: %s \n", nomedaCidade2);
    printf("Número de habitantes da Cidade: %lu \n", populacao2);
    printf("Área da Cidade: %.3f km² \n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu2);
    printf("PIB da Cidade: %.1f bilhões de reais \n", pib2);
    printf("PIB per Capita: %.2f reais \n", pibcapta2);
    printf("Quantidade de Pontos Turísticos: %d \n", pturisticos2);
    printf("Superpoder da Carta: %.3f \n", superPoder2);
    printf("-------------------------------------\n");

    // --- Loop de comparação ---
    char continuar;
    do {
        int atributo1, atributo2;

        // Escolha do primeiro atributo
        printf("\nEscolha o primeiro atributo:\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\nOpção: ");
        scanf("%d", &atributo1);
        while (atributo1 < 1 || atributo1 > 5) {
            printf("Opção inválida! Digite novamente: ");
            scanf("%d", &atributo1);
        }

        // Escolha do segundo atributo (excluindo o primeiro)
        printf("\nEscolha o segundo atributo (não pode ser o mesmo do primeiro):\n");
        for (int atributo = 1; atributo <= 5; atributo++) {
            if (atributo != atributo1) {
                switch (atributo) {
                    case 1: 
                    printf("1. População\n"); 
                    break;

                    case 2: 
                    printf("2. Área\n"); 
                    break;

                    case 3: 
                    printf("3. PIB\n"); 
                    break;

                    case 4: 
                    printf("4. Pontos Turísticos\n"); 
                    break;

                    case 5: 
                    printf("5. Densidade Demográfica\n"); 
                    break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &atributo2);
        while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
            printf("Opção inválida! Digite novamente: ");
            scanf("%d", &atributo2);
        }

        // --- Comparando os dois atributos ---
        float val1[2], val2[2];
        int vencedor[2]; // 1 = Carta1, 2 = Carta2
        float soma1 = 0, soma2 = 0;
        int atributos[2] = {atributo1, atributo2};
        for (int atributo = 0; atributo < 2; atributo++) {
            switch (atributos[atributo]) {
                case 1: 
                val1[atributo]=populacao1; 
                val2[atributo]=populacao2; 
                break;

                case 2: 
                val1[atributo]=area1; 
                val2[atributo]=area2; 
                break;

                case 3: 
                val1[atributo]=pib1; 
                val2[atributo]=pib2; 
                break;

                case 4: 
                val1[atributo]=pturisticos1; 
                val2[atributo]=pturisticos2; 
                break;

                case 5: 
                val1[atributo]=densipopu1; 
                val2[atributo]=densipopu2; 
                break;
            }

            // Comparação considerando densidade inversa
            if (atributos[atributo] == 5) {
                vencedor[atributo] = (val1[atributo] < val2[atributo]) ? 1 : (val2[atributo] < val1[atributo]) ? 2 : 0;
            } else {
                vencedor[atributo] = (val1[atributo] > val2[atributo]) ? 1 : (val2[atributo] > val1[atributo]) ? 2 : 0;
            }

            // Soma para comparação final da rodada
            soma1 += (atributos[atributo] == 5) ? (1/val1[atributo]) : val1[atributo];
            soma2 += (atributos[atributo] == 5) ? (1/val2[atributo]) : val2[atributo];
        }
        // --- Exibição dos resultados ---
        printf("\n-------------------------------------\n");
        printf("Comparação: %s vs %s\n", nomedaCidade1, nomedaCidade2);
        for (int atributo = 0; atributo < 2; atributo++) {
            printf("\n--- Atributo %d ---\n", atributo+1);
            switch (atributos[atributo]) {

                case 1: 
                printf("População\n"); 
                break;

                case 2: 
                printf("Área\n"); 
                break;

                case 3: 
                printf("PIB\n"); 
                break;

                case 4: 
                printf("Pontos Turísticos\n"); 
                break;

                case 5: 
                printf("Densidade Demográfica\n"); 
                break;
            }
            printf("%s: %.2f\n", nomedaCidade1, val1[atributo]);
            printf("%s: %.2f\n", nomedaCidade2, val2[atributo]);

            if (vencedor[atributo]==1) { 
                printf("Vencedora: %s\n", nomedaCidade1); 
                vitoriasCarta1++; 
            }
            else if (vencedor[atributo]==2) { 
                printf("Vencedora: %s\n", nomedaCidade2); 
                vitoriasCarta2++; 
            }
            else 
                printf("Empate neste atributo!\n");
        }

        // Soma dos atributos e resultado final
        printf("\n--- Soma dos Atributos ---\n%s: %.2f\n%s: %.2f\n", nomedaCidade1, soma1, nomedaCidade2, soma2);

        if (soma1 > soma2) 
            printf("Vencedora da rodada: %s\n", nomedaCidade1);

        else if (soma2 > soma1) 
            printf("Vencedora da rodada: %s\n", nomedaCidade2);

        else 
            printf("Empate na rodada!\n");

        printf("\nDeseja fazer outra comparação? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar=='s' || continuar=='S');

    // --- Resultado final ---
    printf("\n-------------------------------------\n");
    printf("        Resultado Final\n");
    printf("-------------------------------------\n");
    printf("Carta 1 venceu %d atributos\n", vitoriasCarta1);
    printf("Carta 2 venceu %d atributos\n", vitoriasCarta2);

    if (vitoriasCarta1 > vitoriasCarta2)
        printf("\n--> Carta 1 é a grande vencedora da comparação! 🏆\n");
    else if (vitoriasCarta2 > vitoriasCarta1)
        printf("\n--> Carta 2 é a grande vencedora da comparação! 🏆\n");
    else
        printf("\n--> Empate! As duas cartas têm o mesmo número de vitórias.\n");

    return 0;
}
