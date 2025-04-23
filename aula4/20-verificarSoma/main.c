#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a != b + c && b != a + c && c != a + b) {
        printf("Nenhum número é igual à soma dos outros dois.\n");
    } else {
        printf("Pelo menos um número é igual à soma dos outros dois.\n");
    }

    return 0;
}
