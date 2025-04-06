#include <stdio.h>

int main(void){
int valorDiaria = 30;
int diasTrabalhados ;

printf("Digite o numero de dias trabalhados: ");
scanf("%d", &diasTrabalhados);
int salario = (valorDiaria * diasTrabalhados) - 0.08 * (valorDiaria * diasTrabalhados);
printf("O salario do encanador eh: %d\n", salario);

}