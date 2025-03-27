#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int idade = 0;
    float peso = 0;
    float altura = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("A pessoa tem %d anos, pesa %.2f kg e mede %.2f de altura", idade, peso, altura);

    return 0;
}