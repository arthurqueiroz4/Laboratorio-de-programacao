#include <stdio.h>

int main (){
    int dia;
    printf("Dias trabalhados: ");
    scanf("%d", &dia);
    if (dia <= 10) printf("Voce recebera %.2f", (float) dia * 50.25 - ((float) dia * 50.25)/10);  
    if (dia > 10 && dia <= 20) printf("Voce recebera %.2f", (float) dia * 50.25 + 2*((float) dia * 50.25)/10 - ((float) dia * 50.25)/10);
    if (dia > 20) printf("Voce recebera %.2f", (float) dia * 50.25 + 3*((float) dia * 50.25)/10 - ((float) dia * 50.25)/10);
    return 0;
}