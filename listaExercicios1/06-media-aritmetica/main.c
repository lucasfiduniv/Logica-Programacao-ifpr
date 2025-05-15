#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("Média aritmética: %.2f\n", media);

    return 0;
}
