#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM];
    int *p=NULL;
    srand(time(NULL));
    for(int i=0;i<TAM;i++ ){
        for(int j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100;
        }
    }
    int maior;
    p = &matriz[0][0];
    puts("Endereco do primeiro elemento do vetor: ");
    printf("%p\n",p);
    for (int i=0;i<(TAM*TAM);i++){
        if (i==0){
            maior = *p;
        } else {
            if (maior < *(p+i)){
                maior = *(p+i);
            }
        }
        if (i % 3 == 0) puts("\n");
        printf("%d ",*(p+i));
    }
    printf("\n\nMaior valor gerado na matriz: %d\n",maior);
}