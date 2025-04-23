#include <stdio.h>

int main() {
    int num1, num2;
    int dez1, uni1, dez2, uni2;

    printf("Digite o primeiro número (dois dígitos): ");
    scanf("%d", &num1);

    printf("Digite o segundo número (dois dígitos): ");
    scanf("%d", &num2);

    dez1 = num1 / 10;
    uni1 = num1 % 10;
    dez2 = num2 / 10;
    uni2 = num2 % 10;

    if (dez1 == uni2 && uni1 == dez2) {
        printf("Um número é o espelho do outro.\n");
    } else {
        printf("Os números não são espelhos.\n");
    }

    return 0;
}
