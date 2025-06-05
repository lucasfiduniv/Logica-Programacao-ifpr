#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int maoEsquerda = 0;
    int maoDireita = 0;
    int resultado;

    do {
        printf("Informe o valor da mao esquerda (entre 0 e 5): ");
        scanf("%d", &maoEsquerda);
    } while (maoEsquerda < 0 || maoEsquerda > 5);

    do {
        printf("Informe o valor da mao direita (entre 0 e 5): ");
        scanf("%d", &maoDireita);
    } while (maoDireita < 0 || maoDireita > 5);

    if (maoDireita < maoEsquerda) {
        resultado = maoEsquerda + maoDireita;
        printf("Resultado: %d\n", resultado);
    } else if (maoDireita > maoEsquerda) {
        resultado = 2 * (maoDireita - maoEsquerda);
        printf("Resultado: %d\n", resultado);
    } else {
        printf("Os valores nao podem ser iguais.\n");
    }

    return 0;
}