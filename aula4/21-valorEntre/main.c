#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if ((A > B && A < C) || (A > C && A < B)) {
        printf("A está entre B e C.\n");
    } else {
        printf("A não está entre B e C.\n");
    }

    return 0;
}
