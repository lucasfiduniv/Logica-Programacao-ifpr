#include <stdio.h>

int main() {
    int n;
    double Hn = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        Hn = Hn+ 1.0 / i;
    }

    printf("O valor de Hn é: %.6lf\n", Hn);

    return 0;
}