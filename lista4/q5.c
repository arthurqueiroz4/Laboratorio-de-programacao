#include <stdio.h>
#define TAM 5

void str();

int main()
{
    str();
    return 0;
}

void str(){
    int i;
    char strg[100];
    scanf("%s",strg);
    puts(strg);
    for (i=0;i<100;i++){
        if (*(strg+i) == '\0'){
            break;
        }
        printf("Endereco [%p] -> Valor [%c]\n",strg+i,*(strg+i));
    }
    printf("Tamanho da string -> %d",i);
}