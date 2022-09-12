#include <stdio.h>

int main (){
    int c;

    for(c=10;c<=100;c+=10){
        printf("Valor em Celsius: %d graus.\nValor em Fahrenheit: %.2f graus.\n\n", c, ((float)c*9)/5 + 32);
    }
    
    return 0;
}
