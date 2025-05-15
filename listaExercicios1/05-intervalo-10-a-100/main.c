#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 >= 10 && num1 <= 100 && num2 >= 10 && num2 <= 100) {
        printf("Ambos os números estão no intervalo de 10 a 100.\n");
    } else {
        printf("Um ou ambos os números estão fora do intervalo de 10 a 100.\n");
    }

    return 0;
}
