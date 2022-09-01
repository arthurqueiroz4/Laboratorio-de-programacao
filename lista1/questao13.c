#include <stdio.h>

int main (){
    int a,b,c;
    printf("Valor de dois numeros espacados: ");
    scanf("%d",&a);
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("Valores trocados. a= %d e b= %d", a, b);
    return 0;
}