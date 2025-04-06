#include <stdio.h>

int main(){

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int sucessor = numero + 1;
    int antecessor = numero - 1;

    printf("O antecessor de %d eh: %d\n", numero, antecessor);
    printf("O sucessor de %d eh: %d\n", numero, sucessor);
}