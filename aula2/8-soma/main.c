#include <stdio.h>

int main(void){
int numero1;
int numero2;
int soma;

printf("Digite um numero inteiro: ");
scanf("%d", &numero1);

printf("Digite outro numero inteiro: ");
scanf("%d", &numero2);
soma = numero1 + numero2;
printf("A soma de %d e %d eh: %d\n", numero1, numero2, soma);

}