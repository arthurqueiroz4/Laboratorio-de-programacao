#include <stdio.h>

int main(){
    char name[20], add[30];
    int cep, tel;
    printf("Digite seu nome: ");
    scanf("%s",name);
    printf("Digite seu endereco: ");
    scanf("%s",add);
    printf("Digite seu CEP: ");
    scanf("%i",&cep);
    printf("Digite seu telefone: ");
    scanf("%i",&tel);
    printf("-----------------\nNOME: %s\nENDERECO: %s\nCEP: %i\nTELEFONE: %i\n-----------------",name,add,cep,tel);
    return 0;
}