#include <stdio.h>

int main() {
    float valor, desconto, valor_final;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    desconto = valor * 0.10;
    valor_final = valor - desconto;

    printf("Valor total: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valor_final);

    return 0;
}
