#include <stdio.h>
#include <stdlib.h>

int main(void){

    int altura,i;
    float media;

    for ( i = 1; i <= 10; i++)
    {
       printf("informe uma altura em centimetros \n");
       scanf("%d",&altura);
       media = media + altura;
    }
    media = media / i;
    printf("A altura media dos 10 eh %.2f centimentros",media);
    
}