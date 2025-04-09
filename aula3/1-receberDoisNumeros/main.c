#include <stdio.h>

int main(void){
    int numero1;
    int numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 >numero2)
    {
        printf("O maior numero eh: %d\n", numero1);
    }else{
        printf("O maior numero eh: %d\n", numero2);
    }
}