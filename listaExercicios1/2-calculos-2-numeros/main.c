#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão inteira: %d\n", num1 / num2);
    } else {
        printf("Divisão inteira: indefinida (divisão por zero)\n");
    }

    return 0;
}
