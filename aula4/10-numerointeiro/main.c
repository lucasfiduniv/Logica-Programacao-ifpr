#include <stdio.h>

int main (void){
    int numero1;
    int numero2;

    printf("Digite um Numero");
    scanf("%d", &numero1);

    printf("Digite um outro numero");
    scanf("%d", &numero2);

    if(numero1 > numero2 && (numero1 - numero2 < 10)){
        printf("esta em ordem crescente e a diferenca e menor que 10");
    }else if(numero1 < numero2){
        printf("a ordem nao e crescente");
    }else if(numero1 - numero2 > 10){
         printf("a diferenca eh maior que 10");
    }

}