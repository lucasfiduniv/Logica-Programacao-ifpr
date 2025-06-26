#include <stdio.h>

int main(void) {
    int rodadas, pontos1 = 0, pontos2 = 0, pontos3 = 0;
    int dado1, dado2, dado3;

    printf("digite o número de rodadas: ");
    scanf("%d", &rodadas);

    for (int i = 1; i <= rodadas; i++) {
        printf("\nrodada %d:\n", i);

        do {
            printf("jogador 1, digite o valor do dado (entre 1 e 6): ");
            scanf("%d", &dado1);
        } while (dado1 < 1 || dado1 > 6);

        do {
            printf("jogador 2, digite o valor do dado (entre 1 e 6): ");
            scanf("%d", &dado2);
        } while (dado2 < 1 || dado2 > 6);

        do {
            printf("jogador 3, digite o valor do dado (entre 1 e 6): ");
            scanf("%d", &dado3);
        } while (dado3 < 1 || dado3 > 6);

        if (dado1 > dado2 && dado1 > dado3) {
            printf("jogador 1 venceu a rodada %d!\n", i);
            pontos1 += dado1;
        } else if (dado2 > dado1 && dado2 > dado3) {
            printf("jogador 2 venceu a rodada %d!\n", i);
            pontos2 += dado2;
        } else if (dado3 > dado1 && dado3 > dado2) {
            printf("jogador 3 venceu a rodada %d!\n", i);
            pontos3 += dado3;
        } else {
            printf("empate na rodada %d!\n", i);
        }
    }

    printf("\nresultado final:\n");
    printf("jogador 1: %d pontos\n", pontos1);
    printf("jogador 2: %d pontos\n", pontos2);
    printf("jogador 3: %d pontos\n", pontos3);

    if (pontos1 > pontos2 && pontos1 > pontos3) {
        printf("jogador 1 é o vencedor geral!\n");
    } else if (pontos2 > pontos1 && pontos2 > pontos3) {
        printf("jogador 2 é o vencedor geral!\n");
    } else if (pontos3 > pontos1 && pontos3 > pontos2) {
        printf("jogador 3 é o vencedor geral!\n");
    } else {
        printf("empate geral entre os jogadores!\n");
    }

    return 0;
}