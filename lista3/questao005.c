#include <stdio.h>
#define TAM 40

int main (){
    char str1[TAM], str2[TAM];
    int cont=0,i;
    puts("Digite uma string: ");
    fgets(str1,TAM,stdin);

    puts("Digite outra string: ");
    fgets(str2,TAM,stdin);

    for(i=0;i<=TAM;i++){
        if (str1[i]=='\n'){
            for(cont=0;cont<=TAM;cont++){
                str1[i] = str2[cont];
                i++;
            }
        break;
        }
    }
    printf("\nStrings concatenadas: %s",str1);
    return 0;
}