#include <stdio.h>  

int main (){
    int x,y;
    printf ("Digite dois numeros espaçados: ");
    scanf("%d",&x);
    scanf("%d",&y);

    switch (x%y)
    {
    case 0:
        printf("O numero %d e multiplo de %d.", x , y);
        break;
    
    default:
        printf("O numero %d nao e multiplo de %d.", x , y);
        break;
    }
    return 0;
}