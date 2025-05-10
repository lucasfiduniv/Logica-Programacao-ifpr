#include <stdio.h>

int main() {
    int hora, minuto;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);

    printf("Digite os minutos (0 a 59): ");
    scanf("%d", &minuto);

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        printf("Horario valido.\n");
    } else {
        printf("Horario invalido.\n");
    }

    return 0;
}
