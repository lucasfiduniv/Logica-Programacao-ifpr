#include <stdio.h>

int main(void){

int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);
if (idade >= 18 && idade <= 70){
    printf("Voce pode votar\n");
}else{
  printf("Voce nao pode votar\n");
}
}