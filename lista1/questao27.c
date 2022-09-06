#include <stdio.h>
#include <math.h>

int main (){
    float x, y, w;
    printf("Digite um valor: ");
    scanf("%f", &x);
    printf("Digite um valor: ");
    scanf("%f", &y);
    printf("Digite um valor: ");
    scanf("%f", &w);

    printf("Media aritmetica: %.2f \nMedia geometrica: %.2f", (x+y+w)/3, pow(x*y*w, 1.0/3.0));
  return 0;
}
