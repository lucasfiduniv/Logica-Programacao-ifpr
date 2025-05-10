#include <stdio.h>

int main() {
    float nota1, nota2, nota3, frequencia, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a frequencia (em %%): ");
    scanf("%f", &frequencia);

    media = (nota1 + nota2 + nota3) / 3;

    if ((media >= 7 && frequencia > 75) || (media >= 5 && frequencia > 95)) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
