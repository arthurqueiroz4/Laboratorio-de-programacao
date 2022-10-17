#include <stdio.h>
#define TAM 5

void str();
void vetor();

int main()
{
    vetor();
    str();
    return 0;
}
void vetor(){
    int v[TAM],input;
    int *p = &input;
    for(int i=0;i<TAM;i++){
        printf("Digite o valor %d do vetor: ",i);
        scanf("%d",p);
        v[i] = *p;
    }
    for(int i=0;i<TAM;i++){
        printf("Endereço [%p] -> Valor [%d] \n",v+i,*(v+i));
    }
}


void str(){
    char vetor[TAM];
    puts("\nDigite a string: ");
    scanf("%s",vetor);
    for(int i=0;i<TAM;i++){
        printf("Endereço [%p] -> Valor [%c]\n",vetor+i,*(vetor+i));
    }
}