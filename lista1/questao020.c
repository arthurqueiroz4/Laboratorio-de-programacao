#include <stdio.h>

int main (){
    
    int x;
    printf("Digite o valor de um numero: ");
    scanf("%d", &x);
    switch (x % 2){
    case 1:
        printf("Numero impar.");
        break;
    case 0:
        printf("Numero par.");
        break;
    }
    return 0;
}