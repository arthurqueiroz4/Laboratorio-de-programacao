#include <stdio.h>

int main (){
    int i,j,num,bin[30],aux;

    for(i=1; i<=256; i++){
        printf("Numero %d em binario: ", i);
        aux = i;
        num = 0;
        for(j=0;aux;j++){
            num = aux % 2;
            bin[j] = num;           
            aux /= 2;
            if (aux == 0) break;

        }
        for(j;j>=0;j--){
            printf("%d", bin[j]);
        }
        printf(", em hexadecimal: %x e em octal: %o",i,i);
        puts("\n");
    }
    

    
    
    return 0;
}