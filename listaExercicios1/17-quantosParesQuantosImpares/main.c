#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
