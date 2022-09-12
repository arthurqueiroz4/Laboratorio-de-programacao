#include <stdio.h>

int main (){
    int dia;
    while (1) {
        printf("Digite um valor: ");
        scanf("%d", &dia);
        switch (dia)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terca\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido\n");
            break;
        }
        if (dia == 0) break;
            
    };
}