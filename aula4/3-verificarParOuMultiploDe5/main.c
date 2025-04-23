#include <stdio.h>

int main(void){
int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);
if (num % 2 == 0 || num % 5 == 0){
    printf("O numero eh par ou multiplo de 5\n");
}else{
    printf("O numero nao eh par ou multiplo de 5\n");
}
}