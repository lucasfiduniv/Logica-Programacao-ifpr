#include <stdio.h>

int main(void){
int numero;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);
if (numero % 2 == 0)
{
    printf("O numero eh par");
}else{
    printf("O numero eh impar");
}
}