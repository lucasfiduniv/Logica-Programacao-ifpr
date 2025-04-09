#include <stdio.h>

int main(void){
int numero;

printf("Digite um numero real: ");
scanf("%d", &numero);

if(numero > 0){
    int metade = numero / 2;
    printf("A metade do numero eh: %d\n", metade);
}else{
    int quadrado = numero * numero;
    printf("O quadrado do numero eh: %d\n", quadrado);
}
}