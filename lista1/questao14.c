#include <stdio.h>

int main (){
    float c;
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &c);
    printf("A temperatura em Fahrenheit e %.2f F", (9* c + 160)/ 5);
    return 0;
}