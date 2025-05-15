#include <stdio.h>

int main() {
    float numero, cubo;
    
    printf("Digite um número real: ");
    scanf("%f", &numero);
    
    cubo = numero * numero * numero;
    
    printf("Cubo: %.2f\n", cubo);
    
    return 0;
}
