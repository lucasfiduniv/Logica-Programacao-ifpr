#include <stdio.h>

int main(void){
float salario;
float valorPrestacao;
float porcentagemPrestacao;
int porcetagemAutorizada = 20;


printf("Digite o valor do salario");
scanf("%f", &salario);
printf("Digite o valor da prestacao");
scanf("%f", &valorPrestacao);

porcentagemPrestacao = (valorPrestacao * 100) / salario;
if(porcentagemPrestacao >= porcetagemAutorizada){
    printf("Emprestimo nao concedido");
}else{
    printf("Emprestimo concedido");
}
}