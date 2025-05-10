#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido. Deve ser positivo.\n");
        return 1;
    }

    printf("Numeros de 1 ate %d que sao divisiveis por 3 ou por 5:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
