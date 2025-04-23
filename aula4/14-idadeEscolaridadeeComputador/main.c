#include <stdio.h>

int main() {
    int idade;
    int escolaridade; 
    int computador;   

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Possui ensino médio completo? (1 para sim, 0 para não): ");
    scanf("%d", &escolaridade);

    printf("Possui computador em casa? (1 para sim, 0 para não): ");
    scanf("%d", &computador);

    if (idade >= 15 && escolaridade == 1 && computador == 1) {
        printf("Você pode se inscrever!\n");
    } else {
        printf("Você não atende aos requisitos para se inscrever.\n");
    }

    return 0;
}
