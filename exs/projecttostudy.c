#include <stdio.h>
#include <stdlib.h>
struct projetos{
    int numero;
    int saldo;
};

int main() {
    int valor;
    int *projs;
    int escolheProj;
    int despesa;
    int *saldo;
    projs = malloc(5 * 4);
    saldo = malloc(5 * 4);
    for(int i=0;i<5;i++){
        *(projs+i) = i;
        *(saldo+i) = 0;
    }
    while(1){
        puts("Projeto [0/4]: ");
        scanf("%d", &escolheProj);
        char proj[5];
        if (escolheProj<0 || escolheProj>4){
            puts("Projeto invalido.");
            continue;
        }
        printf("Projeto %d escolhido.", *(projs+escolheProj));
        puts("\nValor: ");
        scanf("%d", &valor);
        if (valor < 0) break;
        puts("\nDespesa [Receita(1)/Despesa(0)]: ");
        scanf("%d", &despesa);
        if (despesa == 1){
            *(saldo+escolheProj) += valor;
        } else {
            *(saldo+escolheProj) += valor*-1;
        }
        
    }
    for(int i=0;i<5;i++){
        printf("Projeto %d -> %d\n", i, *(saldo+i));
    }
    return 0;
}
