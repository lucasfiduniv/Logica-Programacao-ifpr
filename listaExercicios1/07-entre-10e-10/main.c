#include <stdio.h>

int main() {
    float numero;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    if (numero >= -10 && numero <= 10) {
        printf("O número está entre -10 e 10.\n");
    } else {
        printf("O número está fora do intervalo entre -10 e 10.\n");
    }

    return 0;
}
