#include <stdio.h>

int main(){
    int x, y;
    printf("Digite um inteiro: \n");
    scanf("%d",&x);
    y = x;
    printf("Número no printf com pós-incrementar: %d \n", x++);
    printf("Número depois do printf com pós-incrementar: %d \n", x);
    printf("Número no printf com pré-incrementar: %d \n", ++y);
    printf("Número depois do printf com pré-incrementar: %d \n", y);
    return 0;
}