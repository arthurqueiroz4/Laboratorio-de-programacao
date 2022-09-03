#include <stdio.h>
#include <stdlib.h>
int main (){
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Valor absoluto de %d = %d", x, abs(x));
}