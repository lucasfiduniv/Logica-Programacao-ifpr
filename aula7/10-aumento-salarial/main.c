#include <stdio.h>

int main() {
    double salario = 2000.0;
    double aumento = 0.015;

    for (int ano = 1996; ano <= 2025; ano++) {
        salario += salario * aumento;
        aumento *= 2;
    }

    printf("O salário atual do funcionário é: %.2lf\n", salario);

    return 0;
}