// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct vetor{
    int *p;
    int qntd;
    float media;
};
void preenchervetor(int *, int );
float media(int *, int );

int main() {
    srand(time(NULL));
    struct vetor v1;
    puts("Tamanho do vetor: ");
    scanf("%d", &v1.qntd);
    v1.p = malloc(v1.qntd*4);
    preenchervetor(v1.p, v1.qntd);
    v1.media = media(v1.p, v1.qntd);
    
    for(int i=0;i<v1.qntd;i++){
        printf("%d ", *(v1.p + i));
    }
    
    printf("\nMedia: %.2f", v1.media);
    return 0;
}

void preenchervetor(int *p, int tamanho){
    for(int i=0;i<tamanho;i++){
        *(p+i)= rand() % 1000;
    }
}
float media(int *p, int tamanho){
    float soma =0;
    for(int i=0;i<tamanho;i++){
        soma += *(p + i);
    }
    return soma/tamanho;
}


