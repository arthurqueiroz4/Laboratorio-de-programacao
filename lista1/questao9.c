#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("Sucessor de %d = %d \nAntecessor de %d = %d", x, x+1, x, x-1);
    return 0;
}