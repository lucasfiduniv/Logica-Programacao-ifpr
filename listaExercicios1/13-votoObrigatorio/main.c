#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 69) {
        printf("O voto e obrigatorio.\n");
    } else {
        printf("O voto nao e obrigatorio.\n");
    }

    return 0;
}
