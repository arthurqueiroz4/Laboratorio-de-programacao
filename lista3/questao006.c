#include <stdio.h>
#include <string.h>
#define TAM 20

int main (){
    char str1[TAM];
    
    puts("Digite uma string: ");
    fgets(str1,TAM,stdin);

    for(int i=strlen(str1);i>=0;i--){
        printf("%c", str1[i]);
    }
    
    return 0;
}