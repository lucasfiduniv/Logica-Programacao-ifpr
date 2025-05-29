#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num1,num2;
    printf("informe um valor 1");
    scanf("%d",&num1);
    printf("informe um valor 2");
    scanf("%d",&num2);

    for ( int i = num1; i < num2; i++)
    {
        if (i % 3 ==0 && i%5 ==0)
        {
            printf("FizzBuzz \n");
        } else if (i % 3 == 0)
        {
          printf("Fizz \n");
        }else if (i%5==0)
        {
           printf("Buzz \n");
        }else{
            printf("%d \n",i);
        }
        
        
    }
    

}