#include <stdio.h>

int main(void){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 10 && numero < 20){
        printf("O numero esta no intervalo de 0 a 20\n");
    }else{
        printf("O numero nao esta no intervalo de 0 a 20\n");
    }
}