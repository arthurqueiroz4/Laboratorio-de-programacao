#include <stdio.h>

int main() {
  float num[3];
  float x, maior, menor;

  for(int i=0;i<3;i++){
    puts("Digite um numero: ");
    scanf("%f", &num[i]);
    if (i == 0){
      maior = num[i];
      menor = num[i];
    } else {
      if (num[i] > maior){
        maior = num[i];
      }
      else if (num[i] < menor){
        menor = num[i];
      }
    }
  } 
  printf("Maior: %.0f \nMenor: %.0f", maior, menor);
  return 0;
}