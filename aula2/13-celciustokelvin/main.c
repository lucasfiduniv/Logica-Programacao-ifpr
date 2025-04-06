#include <stdio.h>

int main(void){
int celcius;
int kelvin;

printf("Digite a temperatura em graus celcius: ");
scanf("%d", &celcius);
kelvin = celcius + 273.15;
printf("A temperatura em graus Celsius eh: %d\n", celcius);
printf("A temperatura em graus Kelvin eh: %d\n", kelvin);
}