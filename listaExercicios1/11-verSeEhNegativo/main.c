#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a < 0 || b < 0 || c < 0) {
        printf("Pelo menos um numero e negativo.\n");
    } else {
        printf("Nenhum numero e negativo.\n");
    }

    return 0;
}
