#include <stdio.h>
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("O valor %d em hexadecimal é %x e  em octal %o", x, x, x);
    return 0;
}