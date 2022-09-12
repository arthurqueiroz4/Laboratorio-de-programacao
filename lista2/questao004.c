#include <stdio.h>

int main (){
    
    int j = 150, p = 110, anos = 0;
    while (j > p){
        j += 2;
        p += 3;
        anos+=1;
    }
    printf("%d ", j);
    printf("%d ", p);
    printf("Pedro sera maior que Jose em %d anos.", anos+1);
    return 0;
}