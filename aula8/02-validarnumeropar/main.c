#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numInicial, numFinal;
    printf("Informe o numero inicial \n");
    scanf("%d",&numInicial);
    printf("Informe o numero inicial \n");
    scanf("%d",&numFinal);

    if (numFinal > numInicial)
    {
        for (int i = numInicial; i < numFinal; i++)
        {
           if (i%2 == 0)
           {
            printf("Numero %d eh par \n",i);
           }
        }
    }
    
}