#include <stdio.h>
int main(void){
    int valortotal = 780000; 

    float ganhador1 = valortotal * 0.46;
    float ganhador2 = valortotal * 0.32;
    float ganhador3 = valortotal * 0.22;
    printf("O valor total do premio eh: %d\n", valortotal);
    printf("O ganhador 1 recebera: %.2f\n", ganhador1);
    printf("O ganhador 2 recebera: %.2f\n", ganhador2);
    printf("O ganhador 3 recebera: %.2f\n", ganhador3);
}