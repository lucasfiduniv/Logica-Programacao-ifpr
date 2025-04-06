#include <stdio.h>

int main(void){
int numero;
int quadrado;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);
quadrado = numero * numero;
printf("O quadrado de %d eh: %d\n", numero, quadrado);

}