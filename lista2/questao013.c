#include <stdio.h>

int main (){
    int i,a,b,sum=0;
    printf("Digite o inicio da faixa de valores: ");
    scanf("%d",&a);
    printf("Digite o fim da faixa de valores: ");
    scanf("%d",&b);   
    if (a < b){
        for(i=a;i<b+1;i++){
        if (i % 2 == 0) sum+=i;
    }
    }
    else{
        for(i=a;i>b+1;i--){
        if (i % 2 == 0) sum+=i;
    }
    }
    printf("A somatoria dos numeros pares e %d", sum);
    return 0;
}