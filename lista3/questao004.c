#include <stdio.h>
#include <string.h>
#define TAM 20
int main (){
    char str1[TAM], str2[TAM];

    puts("Digite uma string: ");
    fgets(str1,TAM,stdin);

    puts("Digite outra string: ");
    fgets(str2,TAM,stdin);

    if (strlen(str1)==strlen(str2)) {
        for(int i=0; i<=strlen(str1);i++) {
        
        if (str1[i]!=str2[i]) {printf("Caracter %d diferentes.\n", i);
        } else {printf("Caracter %d iguais.\n", i);}
    }
    } else {puts("Strings diferentes.");}
    return 0;
}
