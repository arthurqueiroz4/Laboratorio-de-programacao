#include <stdio.h>

int main (){
    int x, y;
    printf("Digite dois numeros espacados: ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("SOMA: %d\nPRODUTO: %d\nDIFERENCA: %d\nQUOCIENTE: %.2f\nRESTO: %d", x+y, x*y, x-y, x/y, x%y);
    }