#include <stdio.h>
#include <math.h>

int main (){
  int i, a, b, somador=0, cont=0;
  printf("Digite o inicio: ");
  scanf("%d", &a);
  printf("Digite o fim: ");
  scanf("%d", &b);
  for(i=a;i<=b;i++){
    somador += i;
    cont += 1;
  }
  printf("%d\n", somador);
  printf("%d\n", cont);
  printf("A media e %d", somador/cont);
  return 0;
}