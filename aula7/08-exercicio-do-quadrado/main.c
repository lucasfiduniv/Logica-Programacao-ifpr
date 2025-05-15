#include <stdio.h>

int main(void) {
    int somaDosQuadrados = 0;
    int quadradoDaSoma = 0;
    int soma = 0;

    
    for (int i = 1; i <= 100; i++) {
        somaDosQuadrados += i * i; 
        soma += i;              
    }

    quadradoDaSoma = soma * soma; 

    
    int diferenca = quadradoDaSoma - somaDosQuadrados;


    printf("A soma dos quadrados dos primeiros 100 números naturais é: %d\n", somaDosQuadrados);
    printf("O quadrado da soma dos primeiros 100 números naturais é: %d\n", quadradoDaSoma);
    printf("A diferença entre o quadrado da soma e a soma dos quadrados é: %d\n", diferenca);

    return 0;
}