#include <stdio.h>

int main (){
    float x, y;
    printf("Cotacao do dolar: ");
    scanf("%f",&x);
    printf("A quantidade de reais ");
    scanf("%f",&y);
    printf("Valor da conversao em dolar: em reais %.2f, em dolares %.2f", y, y/x);
}