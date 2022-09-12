#include <stdio.h>

int main (){
    float valor, entrada;
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    printf("Digite o valor da entrada: ");
    scanf("%f",&entrada);

    printf("O valor das prestacoes e %.2f", (valor - entrada)/2);
    return 0;
}