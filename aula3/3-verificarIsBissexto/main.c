#include <stdio.h>

int main(void){
int ano;

printf("Digite um ano: ");
scanf("%d", &ano);


if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("O ano %d eh bissexto.\n", ano);
            } else {
                printf("O ano %d nao eh bissexto.\n", ano);
            }
        } else {
            printf("O ano %d eh bissexto.\n", ano);
        }
    } else {
        printf("O ano %d nao eh bissexto.\n", ano);
    }
}