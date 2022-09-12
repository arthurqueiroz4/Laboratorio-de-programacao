#include <stdio.h>

int main (){
    int x, y=0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    while (y == 0){
        printf("Digite outro numero: ");
        scanf("%d", &y);
        if (y==0) printf("Digite um valor diferente de 0\n");
    } 
    printf("Divisao do primeiro pelo seugndo: %.2f", (float) x/y);
    return 0;
}