#include <stdio.h>

int main(void) {
    int numero;

    do {
        printf("escreva um número entre 1 e 6: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 6);

    printf("numero valido informado: %d\n", numero);

    return 0;
}