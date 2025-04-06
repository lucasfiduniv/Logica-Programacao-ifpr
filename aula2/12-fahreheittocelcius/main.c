#include <stdio.h>

int main(void){
int fahrenheit;
int celcius;

printf("Digite a temperatura em graus Fahrenheit: ");
scanf("%d", &fahrenheit);
celcius = (fahrenheit - 32) * 5/9;
printf("A temperatura em graus Celsius eh: %d\n", celcius);
printf("A temperatura em graus Fahrenheit eh: %d\n", fahrenheit);
}