#include <stdio.h>

int main() {
    int hora, minuto;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minuto);

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        printf("Horário válido.\n");
    } else {
        printf("Horário inválido.\n");
    }

    return 0;
}
