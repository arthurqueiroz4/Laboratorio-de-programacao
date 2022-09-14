#include <stdio.h>

int main(){
    int x, x1, x2, x3, x4, x5;
    printf("Digite um inteiro de 5 dígitos: \n");
    scanf("%d",&x);
    x1 = x / 10000;
    x2 = (x - x1 * 10000) / 1000;
    x3 = (x - (x1 * 10000 + x2 * 1000))/ 100;
    x5 = x % 10;
    x4 = ((x - x5) % 100 )/10;
    if(x1 == x5 && x2 == x4){
        printf("%d é um palindromo.", x);
    }else {
        printf("%d não é um palíndromo.", x);
    };
    return 0;
}