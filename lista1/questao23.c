#include <stdio.h>

int main (){
    int x, x3, x2, x1;
    printf("Digite um numero: ");
    scanf("%d", &x);
    x3 = x%10;
    x /= 10;
    x2 = x%10;
    x /= 10;
    x1 = x%10;
    printf("%d %d %d", x3,x2,x1);
    return 0;
}