#include <stdio.h>

int main (){
    float raio;
    printf("Qual o raio: ");
    scanf("%f", &raio);
    printf("Diametro: %.1f", raio * 2);
    printf("\nCircunferecia: %.1f", 2 * 3.14159 * raio);
    printf("\nArea: %.1f", 3.14159 * raio * raio);
    return 0;
}