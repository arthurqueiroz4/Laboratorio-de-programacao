#include <stdio.h>
#define TAM 3
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
    int v[TAM], soma=0, mult=1;
    srand(time(NULL));
    for(int i=0;i<TAM;i++){
        v[i] = rand() % 20;
        soma += v[i];
        mult *= v[i];
        printf("%d ",v[i]);
    }
    printf("\n%d", mult);
    printf("\n\nMedia arit = %.1f\nMedia geo = %.1f", (float) soma/TAM, pow((float)mult,(float)1/3));

    return 0;
}