// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarmatriz(int *, int, int );
void preenchermatriz(int *, int , int );
void ordenarmatriz(int *p, int tamanho);

int main() {
    int *matriz, faixa, linha, coluna;
    void (*Func[])() = {preenchermatriz,printarmatriz,ordenarmatriz};
    srand(time(NULL));
    puts("Tamanho da matriz: ");
    scanf("%d", &linha);
    scanf("%d", &coluna);
    matriz = malloc(linha*coluna*sizeof(int));
    puts("Valor max: ");
    scanf("%d", &faixa);
    (*Func[0])(matriz,linha*coluna,faixa);
    puts("Desordenado: \n");
    (*Func[1])(matriz, linha, coluna);
    puts("\n");
    (*Func[2])(matriz, linha*coluna);
    puts("\n");
    puts("Ordenado: \n");
    (*Func[1])(matriz, linha, coluna);
    return 0;
}
void preenchermatriz(int *p, int tamanho, int faixa){
    for(int i=0; i<tamanho;i++){
        *(p+i) = rand() % faixa;
    }
}
void printarmatriz(int *p, int linha,int coluna){
    for(int i=0;i<linha*coluna;i++){
        if (i % linha == 0){
            puts("\n");
        }
        printf("%d ", *(p+i));
    }
}
void ordenarmatriz(int *p, int tamanho){
    int *aux;
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho-1;j++){
            if (*(p+i)<*(p+j)){
                *aux = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = *aux;
            }
        }
    }
}
