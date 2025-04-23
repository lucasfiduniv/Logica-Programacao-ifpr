#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 10) {
        printf("Muito frio.\n");
    } else if (temperatura >= 10 && temperatura <= 25) {
        printf("Temperado.\n");
    } else if (temperatura > 25 && temperatura < 100) {
        printf("Calor extremo.\n");
    } else if (temperatura >= 100) {
        printf("Temperatura inválida.\n");
    }

    return 0;
}
