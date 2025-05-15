#include <stdio.h>

int main(void) {
    int soma = 0;
    int contador = 0;

    for (int i = 1; contador < 50; i++) {
        if (i % 2 == 0) { 
            soma += i;
            contador++;
        }
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}