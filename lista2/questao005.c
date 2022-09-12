#include <stdio.h>

int main (){
    int n = 0, n1 = 0;
    while (1 == 1){
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("Digite um numero: ");
        scanf("%d", &n1);
        if (n == 0) break;
        else{
            if (n == n1) printf("Os numeros sao iguais\n");
            else if (n > n1) printf("O numero %d e maior que %d\n", n, n1);
            else printf("O numero %d e maior que %d\n", n1, n);
        }
    };
}