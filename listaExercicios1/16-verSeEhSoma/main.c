#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a != b + c && b != a + c && c != a + b) {
        printf("Nenhum dos numeros e igual a soma dos outros dois.\n");
    } else {
        printf("Algum dos numeros e igual a soma dos outros dois.\n");
    }

    return 0;
}
