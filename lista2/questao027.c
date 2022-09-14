#include <stdio.h>

int main()
{
    int x = 0, maior, menor, i = 1, produto;
    while(!(x % 2 == 0 && x < 0)){
        puts("DIGITE UM VALOR PAR E NEGATIVO PARA PARAR \n");
        puts("Digite um valor: \n");
        scanf("%d", &x);
        if(i == 1){
            maior = x;
            menor = x;
        } else {
            if(x > maior){
                maior = x;
            };
            if(x < menor){
                menor = x;
            }
        };
        i++;
    }
    produto = maior * menor;
    printf("Dos %d números digitados, o maior é %d e o menor é %d. \n", i, maior, menor);
        printf("O produto do maior e do menor é %d", produto);
    return 0;
}