#include <stdio.h>

int main(void){
    int senha;

    printf("Digite um numero com 4 digitos que seja par");
    scanf("%d",&senha);

    if((senha >1000 || senha<9999) && senha % 2 == 0){
        printf("o numero informado  eh valido");
    }else{
        printf("o numero informado nao eh valido");
    }
}