#include <stdio.h>

int main (){
    int x, n, n1;
    printf("x * 2^n\n");
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    n1 = 1 << n;
    printf("Valor calculado %d", x * n1);
    return 0;
}