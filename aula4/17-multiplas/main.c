#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a > b && c == (a - b)) {
        printf("Condições atendidas.\n");
    } else {
        printf("Condições não atendidas.\n");
    }

    return 0;
}
