#include <stdio.h>

int main(void){
float nota1;
float nota2;
float frequencia;
float media;


printf("Informe a nota 1");
scanf("%f", &nota1);

printf("Informe a nota 2");
scanf("%f", &nota2);

printf("Informe a frequencia em %");
scanf("%f", &frequencia);

media = (nota1 + nota2) / 2;

if(media >= 7 || (media >= 5 && frequencia >75) ){
    printf("esta aprovado");
}else{
    printf("esta Reprovado");
}
}