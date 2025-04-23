#include <stdio.h>

int main(void){
int numero1;
int numero2;
int numero3;

printf("Digite o primeiro numero inteiro: ");
scanf("%d", &numero1);
printf("Digite o segundo numero inteiro: ");
scanf("%d", &numero2);
printf("Digite o terceiro numero inteiro: ");
scanf("%d", &numero3);

if(numero1 > numero2 && numero1 > numero3 && numero2 > numero3){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero1, numero3, numero2);

}else if(numero1 > numero2 && numero1 > numero3 && numero3 > numero2){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero1, numero2, numero3);
}else if(numero2 > numero1 && numero2 > numero3 && numero1 > numero3){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero2, numero3, numero1);
}else if(numero2 > numero1 && numero2 > numero3 && numero3 > numero1){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero2, numero1, numero3);
}else if(numero3 > numero1 && numero3 > numero2 && numero1 > numero2){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero3, numero2, numero1);
}else if(numero3 > numero1 && numero3 > numero2 && numero2 > numero1){
    printf("O numero %d eh o maior e o numero %d eh o menor\n e o numero do meio eh %d", numero3, numero1, numero2);
}

else if(numero1 == numero2 && numero1 == numero3){
    printf("Os numeros sao iguais");
}else if(numero1 == numero2 && numero1 > numero3){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o menor", numero1, numero2, numero3);
}else if(numero1 == numero2 && numero1 < numero3){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o maior", numero1, numero2, numero3);
}else if(numero1 == numero3 && numero1 > numero2){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o menor", numero1, numero3, numero2);
}else if(numero1 == numero3 && numero1 < numero2){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o maior", numero1, numero3, numero2);
}else if(numero2 == numero3 && numero2 > numero1){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o menor", numero2, numero3, numero1);
}else if(numero2 == numero3 && numero2 < numero1){
    printf("Os numeros %d e %d sao iguais e o numero %d eh o maior", numero2, numero3, numero1);
}
}