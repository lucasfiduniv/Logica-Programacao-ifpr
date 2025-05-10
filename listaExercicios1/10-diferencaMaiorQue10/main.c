#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    if (num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Pelo menos um dos números é negativo.\n");
    } else {
        printf("Nenhum dos números é negativo.\n");
    }

    return 0;
}
