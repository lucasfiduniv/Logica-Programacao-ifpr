#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if ((num1 % 3 == 0) ^ (num2 % 3 == 0)) {
        printf("Somente um dos números é divisível por 3.\n");
    } else {
        printf("Ambos ou nenhum dos números são divisíveis por 3.\n");
    }

    return 0;
}
