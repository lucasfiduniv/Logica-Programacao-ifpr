#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int H = 0;
    int M = 0;
    int S = 0;
    int T = 0;
    int TotalS=0;

    do {
        printf("Digite o horario de inicio de jogo somente a Hora: ");
        scanf("%d", &H);
    } while (H < 0 || H > 23);
    
    do {
        printf("Digite o horario de inicio de jogo somente os Minutos: ");
        scanf("%d", &M);
    } while (M < 0 || M > 59);

    do {
        printf("Digite o horario de inicio de jogo somente os segundos: ");
        scanf("%d", &S);
    } while (S < 0 || S > 59);

    printf("Adicione em quantos segundos a partida atrasou: ");
    scanf("%d", &T);

    // S += T  ;
    // M += S / 60;
    // S %= 60;
    // H += M / 60;
    // M %= 60;
    // H %= 24;

    TotalS = (H*3600)+(M*60)+S+T;
    H = (TotalS / 60)/60;
    TotalS = TotalS % H;
    M = (TotalS /60);
    TotalS = TotalS % M;
    S = TotalS;
    H = H % 24;

    printf("O horario final do jogo é: %02d:%02d:%02d\n", H, M, S);

    return 0;
}