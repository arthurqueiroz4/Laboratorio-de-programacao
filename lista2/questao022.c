#include <stdio.h>

int main() {
    int num,num3,num2,num1,alg=1,i,alg7=0;
    puts("Digite um numero: ");
    scanf("%d", &num);
    num2 = num;
    i = 10;  
    while(1){
      num1 = num / 10;
      if (num1 == 0) {
        break;
      } else {
        alg += 1;
      }
      num = num1;
    }
    for(i=0;i<=alg;i++){
      if (num2 % 10 == 7){
        alg7 += 1;
        }  
      num2 /= 10;
    }
    printf("O numero tem %d algarismos.\nE possuem %d algarismo iguais a 7.", alg, alg7);
    return 0;
}