#include <stdio.h>

int main(void){

int anoNascimento;
int idadeAceita = 16;
int idade = 0;
int anoAtual = 2025;

printf("Digite seu ano de nascimento: ");
scanf("%d", &anoNascimento);

idade = anoAtual - anoNascimento;

if (idade >= idadeAceita){
    printf("Voce pode votar\n");
}else{
    printf("Voce nao eh pode votar\n");
}

}