#include <stdio.h>

int main() {
    float temp;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);

    if (temp < 10) {
        printf("Muito frio\n");
    } else if (temp <= 25) {
        printf("Agradavel\n");
    } else if (temp < 100) {
        printf("Calor extremo\n");
    } else {
        printf("Invalida\n");
    }

    return 0;
}
