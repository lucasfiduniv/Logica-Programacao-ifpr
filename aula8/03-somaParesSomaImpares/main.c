#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numSol,somaPar =0,somaImpar=0;

    printf("Informe a quantidade de numeros que serao solicitados \n");
    scanf("%d",&numSol);

    for (int i = 1; i <= numSol; i++)
    {
        int num;
    printf("Informe o numero %d \n",i);
    scanf("%d",&num);
        if (num %2 ==0)
        {
         somaPar = somaPar +num;   
        }else{
        somaImpar = somaImpar +num;
        }
    }
    printf("a soma dos numeros pares eh %d \n", somaPar);
    printf("a soma dos numeros impares eh %d\n", somaImpar);
    
    
}