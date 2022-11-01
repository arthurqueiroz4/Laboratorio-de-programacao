#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crescente(int *,int);
void decrescente(int *, int);
void organizarvetor(void (*pF)(), int,int *);


int main()
{
    void (*pFunc[])() = {crescente,decrescente};
    int x;
    
    puts("Digite um comando:");
    puts("0 - Crescente");
    puts("1 - Decrescente");
    scanf("%d",&x);

    srand(time(NULL));
    int tamanho;
    tamanho = rand() % 10 + 1;
    int vetor[tamanho];
    for(int x=0; x<tamanho;x++){
        *(vetor+x) = rand() % 100;
    }
    
    /*(*pFunc[x])(vetor, tamanho);*/
    organizarvetor(pFunc[x], tamanho, vetor);
       
    return 0;
}

 void organizarvetor(void (*pF)(), int tam,int *pvetor){
    (*pF)(pvetor, tam);
}

void crescente(int *pvetor, int tamanho){
    puts("Antes: ");
    for(int i=0;i<tamanho;i++){
       printf("%d ",*(pvetor+i));
    }
    int trocar=0;
    for(int i=0;i<tamanho-1;i++){
        for(int z=i+1;z<tamanho;z++){
          if (pvetor[i]>pvetor[z]){
            trocar = pvetor[i];
            pvetor[i] = pvetor[z];
            pvetor[z] = trocar;
          }
      }
    }
    puts("\nDepois: ");
    for(int i=0;i<tamanho;i++){
       printf("%d ",*(pvetor+i));
    }
}

void decrescente(int *pvetor, int tamanho){
    puts("Antes: ");
    for(int i=0;i<tamanho;i++){
       printf("%d ",*(pvetor+i));
    }
    int trocar=0;
    for(int i=0;i<tamanho-1;i++){
        for(int z=i+1;z<tamanho;z++){
          if (pvetor[i]<pvetor[z]){
            trocar = pvetor[i];
            pvetor[i] = pvetor[z];
            pvetor[z] = trocar;
          }
      }
    }
    puts("\nDepois: ");
    for(int i=0;i<tamanho;i++){
       printf("%d ",*(pvetor+i));
    }
}