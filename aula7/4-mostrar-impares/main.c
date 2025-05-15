#include <stdio.h>

int main(void){
    int n;
    printf("Informe um valor N \n");
    scanf("%d",&n);

    for(int i=1; i<=n; i=i+2){
        printf("%d \n",i);
    }
}