#include <stdio.h>

int main(void) {
    int numero, soma = 0;


    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

   
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) { 
            soma += i;
        }
    }

    printf("A soma dos divisores de %d (exceto ele mesmo) é: %d\n", numero, soma);

    return 0;
}