#include <stdio.h>
#include <math.h>
int main (){
    int i;

    for(i=0;i<8;i++){
        printf("3^%d = %.0f\n", i, pow(3,i));
    }
    return 0;
}