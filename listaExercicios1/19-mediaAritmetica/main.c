#include <stdio.h>

int main() {
    int n, num, soma = 0;
    float media;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);
        soma += num;
    }

    media = (float)soma / n;
    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
