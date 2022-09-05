#include <stdio.h>

int main (){
    int s, horas;
    float minutos, segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &s);
    horas = s / 3600;
    minutos = ((float) s / 3600 - horas ) * 60;
    segundos = (((float) s / 3600 - horas ) * 60 - (int) minutos) * 60;
    printf("Horas = %d \nMinutos = %.0f \nSegundos = %0.f\n",horas, minutos, segundos);
}