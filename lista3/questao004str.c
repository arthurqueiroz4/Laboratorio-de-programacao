#include <stdio.h>
#include <string.h>
#define TAM 20
int main () {
     char str1[TAM], str2[TAM];

    puts("Digite uma string: ");
    fgets(str1,TAM,stdin);

    puts("Digite outra string: ");
    fgets(str2,TAM,stdin);

    if (strcmp(str1,str2)==0){
        puts("Strings iguais.");
    } else {puts("Strings diferentes.");}
}