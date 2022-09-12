#include <stdio.h>

int main (){
    int i,a,b;
    printf("Digite o inicio da faixa de valores: ");
    scanf("%d",&a);
    printf("Digite o fim da faixa de valores: ");
    scanf("%d",&b);   
    if (a < b){
        for(i=a;i<b+1;i++){
        if (i % 4 == 0) printf("%d ", i*i);
    }
    }
    else{
        for(i=a;i>b+1;i--){
        if (i % 4 == 0) printf("%d ", i*i);
    }
    }
    return 0;
}