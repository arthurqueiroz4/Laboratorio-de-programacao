#include <stdio.h>

int main () {
    float larg, alt, comp;
   printf("Digite a largura: ");
   scanf("%f", &larg);
   printf("Digite a altura: ");
   scanf("%f", &alt);
   printf("Digite o comprimento: ");
   scanf("%f", &comp) ;

   printf("Volume = %.2f", larg * alt * comp);
    return 0;
}