#include <stdio.h>

int main(){
    int hr, min, seg;
    printf("Digite a hora: ");
    scanf("%d", &hr);
    printf("Digite o minuto: ");
    scanf("%d", &min);
    printf("Digite os segundos: ");
    scanf("%d", &seg);
    printf("--------------------------------------");
    printf("\nHoras = %d seg\nMinutos = %d seg\nSegundos = %d seg", hr * 60 * 60, min * 60, seg);
    printf("\nO total de segundos e %d", hr * 60 * 60 + min * 60 + seg);
    return 0;
}