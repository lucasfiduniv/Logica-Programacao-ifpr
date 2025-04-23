#include <stdio.h>

int main(void){
int senha;
int senhaCorreta = 9999;
int idade;

printf("Digite sua idade");
scanf("%d",&idade);

printf("Digite sua senha");
scanf("%d",&senha);

if(idade > 18 || senha == senhaCorreta){
    printf("Acesso Liberado");

}else{
    printf("Acesso Negado");
}
}