#include <stdio.h>

int main(void) {
    int A, B, soma = 0;

    
    do {
        printf("Digite um valor para A (entre 0 e 1000): ");
        scanf("%d", &A);
    } while (A <= 0 || A >= 1000);

    do {
        printf("Digite um valor para B (entre 0 e 1000): ");
        scanf("%d", &B);
    } while (B <= 0 || B >= 1000);

    for (int i = 1; i < 1000; i++) {
        if ((i % A == 0 || i % B == 0) && !(i % A == 0 && i % B == 0)) {
            soma += i;
        }
    }

    printf("A soma dos valores menores que 1000, múltiplos de %d ou %d, mas não de ambos, é: %d\n", A, B, soma);

    return 0;
}