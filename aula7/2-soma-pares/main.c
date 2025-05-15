#include <stdio.h>

int main(void){
    int soma =0;
    for(int i=0; i<=100; i=i+2){
        soma = soma + i;
    }
    printf("%d",soma);
}