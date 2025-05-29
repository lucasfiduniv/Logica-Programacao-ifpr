#include <stdio.h>
#include <stdlib.h>

int main(void){
    int maior=0,menor =1410065407,soma =0,i;

for(i = 1; i<=10; i++){
    int num;
    printf("Informe o numero %d \n",i);
    scanf("%d",&num);
    soma = soma +num;
    if(num > maior){
        maior = num;
    }
    if (num < menor)
    {
       menor = num;
    }
}
soma = soma /i;

printf("o menor eh %d \n",menor);
printf("o maior eh %d \n",maior);
printf("a media eh %d \n",soma);
}