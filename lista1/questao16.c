#include <stdio.h>

int main (){
    float horaaula, horastrab, desconto, valorliq;
    printf("Valor da hora aula: ");
    scanf("%f", &horaaula);
    printf("Horas trabalhadas: ");
    scanf("%f", &horastrab);
    printf("Valor bruto: %.2f\n", horaaula*horastrab);
    printf("Valor do desconto em porcentagem: ");
    scanf("%f", &desconto);
    printf("Valor liquido: %.2f", horaaula*horastrab - (desconto/100)*(horaaula*horastrab));
    
    return 0;
}