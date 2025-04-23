#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if ((num1 % 3 == 0 && num2 % 3 != 0) || (num1 % 3 != 0 && num2 % 3 == 0)) {
        printf("Apenas um dos números é divisível por 3.\n");
    } else {
        printf("Condição não atendida.\n");
    }

    return 0;
}
