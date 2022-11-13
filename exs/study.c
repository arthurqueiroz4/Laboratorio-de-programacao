#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

void preenchervetor(int *,int,int);
void imprimirvetor(int *, int);

int main()
{
    int *pv=NULL;
    void (*op[])()= {preenchervetor, imprimirvetor};
    
    pv = malloc(TAM * sizeof(int));
    
    op[0](pv, 0, TAM);
    op[1](pv, TAM);
    
    int qtdn;
    puts("Digite o novo tamanho: ");
    scanf("%d", &qtdn);
    if (qtdn < TAM){
        puts("Tamanho invalido.");
        exit(1);
    }
    pv = realloc(pv, abs(TAM-qtdn));
    op[0](pv, TAM, qtdn);
    op[1](pv, TAM+abs(TAM-qtdn));    
    return 0;
}

void preenchervetor(int *v, int inicio, int fim){
    srand(time(NULL));
    for(int i=inicio;i<fim;i++){
        *(v+i) = rand() % 100;
    }
}

void imprimirvetor(int *v, int fim){
    for(int i=0;i<fim;i++){
        printf("[%p] -> %d\n", v+i, *(v+i));
    }
}
