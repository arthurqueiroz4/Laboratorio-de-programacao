#include <stdio.h>
#define TAM 20
int main (){
    char str[TAM], c;
    int cont=0;
    puts("Digite uma string: ");
    while (1){
        str[cont] = getchar();
        if (str[cont] == '\n') break;
        cont += 1;
    }
    printf("Essa string possui %d caracteres.", cont);
    return 0;
}