#include <stdio.h>

int main(void){
int celcius;
int fahrenheit;

printf("Digite a temperatura em graus Celsius: ");
scanf("%d", &celcius);
fahrenheit = (celcius * 9/5) + 32;
printf("A temperatura em graus Fahrenheit eh: %d\n", fahrenheit);
printf("A temperatura em graus Celsius eh: %d\n", celcius);

}