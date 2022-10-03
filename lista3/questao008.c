#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

int main (){
    int v[TAM], intervalo;
    srand(time(NULL));
    
    puts("Qual o intervalo: ");
    scanf("%d",&intervalo);
    for(int i=0;i<=TAM;i++){
        if (i==0){ 
            v[i] = rand() % intervalo + 1;
        }else{
            if (v[i]<v[i-1]){
                while(v[i]<v[i-1]){
                    v[i] = rand() % intervalo + 1;
                }
            } else {
                v[i] = rand() % intervalo + 1;
            }
        }
        printf("\n%d",v[i]);
    }
}