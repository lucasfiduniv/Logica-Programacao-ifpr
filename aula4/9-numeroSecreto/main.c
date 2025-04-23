#include <stdio.h>

int main(void){

int numeroSecreto = 111;

int numeroUsuario;


printf("Digite um numero para chutar");
scanf("%d",&numeroUsuario);

if(numeroUsuario < numeroUsuario && numeroSecreto % 2 == 1){
    printf("Muito baixo e ímpar");
}else if (numeroUsuario < numeroUsuario && numeroSecreto % 2 == 0){
    printf("muito baixo e Par");
}else if(numeroUsuario > numeroUsuario && numeroSecreto % 2 == 1){
    printf("Muito Alto e ímpar");
}else if (numeroUsuario > numeroUsuario && numeroSecreto % 2 == 0){
    printf("muito Alto e Par");
}else if (numeroSecreto == numeroSecreto){
    printf("Acertou");
}





}