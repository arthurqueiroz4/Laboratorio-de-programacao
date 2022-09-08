#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("O valor %.1f\nO seu triplo: %.1f\nO seu quadrado: %.1f\nA sua metade: %.1f", x, x*3, pow(x,2), x/2);
    return 0;
}
