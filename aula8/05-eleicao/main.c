#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numVotantes, somaCand1 = 0,somaCand2 = 0 ,somaCand3 = 0;
    printf("qual o numero de votantes? \n");
    scanf("%d",&numVotantes);

    for (int i = 1; i <= numVotantes; i++)
    {
        int num;
        printf("Qual foi o candidato que voce deseja?\n Digite 1 para o candidato 1 \n Digite 2 para o candidato 2 \n Digite 3 para o candidato 3 \n");
        scanf("%d",&num);
        
        switch (num)
        {
        case 1:
            somaCand1 = somaCand1 +1;
            break;

        case 2:
            somaCand2 = somaCand2 +1;
            break;
        
        case 3:
            somaCand3 = somaCand3 +1;
            break;

        default:
            break;
        }

    }
    printf("O candidato 1 recebeu %d \n", somaCand1);
    printf("O candidato 2 recebeu %d \n",somaCand2);
    printf("O candidato 3 recebeu %d \n",somaCand3);
    


}