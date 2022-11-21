// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct estoque{
    char *nomePeca;
    int numPeca;
    float preco;
    int numPedido;
};

int main() {
    struct estoque ferramenta;
    ferramenta.nomePeca = malloc(20 * sizeof(char));
    puts("Nome da peca: ");
    scanf("%s", ferramenta.nomePeca);
    fflush(stdin);
    puts("Numero da peca: ");
    scanf("%d", &ferramenta.numPeca);
    puts("Preco: ");
    scanf("%f", &ferramenta.preco);
    puts("Numero do pedido: ");
    scanf("%d", &ferramenta.numPedido);
    puts("-=-=-=-=-=-=-=-=-=-=-=-");
    printf("Nome da peca: ");
    puts(ferramenta.nomePeca);
    printf("Numero da peca: %d\nPreco: %.2f\nNumero do pedido: %d", ferramenta.numPeca, ferramenta.preco,ferramenta.numPedido);

    return 0;
}
