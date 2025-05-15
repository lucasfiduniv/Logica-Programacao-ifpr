#include <stdio.h>

int main(void){
int n1,n2;

printf("informe um numero \n");
scanf("%d",&n1);

printf("informe um outro numero \n");
scanf("%d",&n2);

for (int i = 0; i <= n2; i++)
{
    int valor;
    valor = n1 * i;
  printf("%d x %d = %d \n",n1,i,valor);
}


}