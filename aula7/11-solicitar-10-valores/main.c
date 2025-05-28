#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;
    double soma = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        if (i == 0) {
            maior = menor = numeros[i];
        } else {
            if (numeros[i] > maior) maior = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A média dos números é: %.2lf\n", soma / 10);

    return 0;
}