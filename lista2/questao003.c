#include <stdio.h>

int main (){
    int num, i, fat;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num == 0){
        fat = 1;
        printf("%d",fat);
    }else{
        for(fat = 1; num > 1; num--){
        fat = fat*num;
        }
        printf("%d",fat);
        }
    
    return 0;
}