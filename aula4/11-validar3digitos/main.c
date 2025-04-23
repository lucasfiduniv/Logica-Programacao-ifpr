#include <stdio.h>


int main(void){
    int numero;

    printf("Digite um numero");
    scanf("%d",&numero);

int numero1 = numero / 100;         
    int numero2 = (numero / 10) % 10;   
    int numero3 = numero % 10;           

printf("%d",numero1);
printf("%d",numero2);
printf("%d",numero3);
    if((numero1 == numero2 || numero1 == numero3)||
        (numero2 == numero1 || numero2 == numero3)||
         (numero3 == numero1 || numero3 == numero2)){
printf("tem numeros repetidos");
         }else{
            printf("nao tem numeros repetidos");
         }
}