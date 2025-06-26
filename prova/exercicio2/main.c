#include <stdio.h>

int main(void) {
    int num1, num2, num3, maior;

    printf("digite o primeiro número: ");
    scanf("%d", &num1);

    printf("digite o segundo número: ");
    scanf("%d", &num2);

    printf("digite o terceiro número: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    printf("o maior número é: %d\n", maior);

    return 0;
}