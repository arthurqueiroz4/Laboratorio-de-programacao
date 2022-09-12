#include <stdio.h>
#include <math.h>

int main (){
  float soma;
  soma = 4*(pow(2,64) - 1)/ 2 - 1;
    printf("O somatorio de graos de trigo e uma pg de razao 2, logo se aplica a formula Sn = a1(q^n - 1)/q - 1 = %.0f", soma);
    return 0;
}