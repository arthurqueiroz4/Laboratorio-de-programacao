#include <stdio.h>

int main(){
    short int a,b,apoio;
    a = 2;
    b = 3;
    printf("Antigo: \nValor de a: %d\nValor de b: %d\n",a,b);
    apoio = a;
    a = b;
    b = apoio;
    printf("Novo: \nValor de a: %d\nValor de b: %d\n",a,b);
    return 0;
}