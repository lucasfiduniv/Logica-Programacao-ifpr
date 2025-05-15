#include <stdio.h>

int main(){
 int num_termos;


    do{
        printf("Quantos termos da sequencia de fibonnaci?");
        scanf("%d",&num_termos);
    }while(num_termos < 0);

   int a = 0 ;
   int b = 1;
   int proximo = 0;

   for(int i =0; i< num_termos; i++){
        if(i == 0){
            printf("%d \n",a);
        }else if(i == 1){
            printf("%d \n",b);
        }else{
            proximo = a+b;
            printf("%d \n",proximo);
            a = b;
            b = proximo;
        }
   }
    
    
}