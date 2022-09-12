#include <stdio.h>

int main (){
    int i,a,b,cont=0;
    printf("Digite o inicio da faixa de valores: ");
    scanf("%d",&a);
    printf("Digite o fim da faixa de valores: ");
    scanf("%d",&b);   
    if (a < b){
        for(i=a;i<b+1;i++){
        if (i % 3 == 0) cont+=1;
    }
    }
    else{
        for(i=a;i>b+1;i--){
        if (i % 3 == 0) cont+=1;
    }
    }
    printf("Ha %d valores divisiveis por 3.", cont);
    return 0;
}