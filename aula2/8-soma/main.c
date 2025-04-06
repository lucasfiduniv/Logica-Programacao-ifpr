#include <stdio.h>

int main(void){
int numero1;
int numero2;
int soma;
int subtracao;
int multiplicacao;
int divisao;

printf("Digite o primeiro numero inteiro: ");
scanf("%d", &numero1);
printf("Digite o segundo numero inteiro: ");
scanf("%d", &numero2);
soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;
printf("A soma de %d e %d eh: %d\n", numero1, numero2, soma);
printf("A subtracao de %d e %d eh: %d\n", numero1, numero2, subtracao);
printf("A multiplicacao de %d e %d eh: %d\n", numero1, numero2, multiplicacao);
printf("A divisao de %d e %d eh: %d\n", numero1, numero2, divisao);

}