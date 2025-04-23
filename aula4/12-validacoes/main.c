#include <stdio.h>

int main(void){
    int numero1;
    int numero2;
    int numero3;

printf("digite 3 numeros, pelo menos 1 tem que ser negativo e nenhum pode ser 0");
    printf("digite o numero 1");
    scanf("%d",&numero1);

    printf("digite o numero 2");
    scanf("%d",&numero2);

    printf("digite o numero 3");
    scanf("%d",&numero3);

    if ((numero1 < 0 || numero2 < 0 || numero3 < 0) && (numero1 != 0 && numero2 != 0 && numero3 != 0)  )
    {
        printf("Os numeros digitados sao validos");
    }else
        printf("Os numeros digitados nao sao validos");
}