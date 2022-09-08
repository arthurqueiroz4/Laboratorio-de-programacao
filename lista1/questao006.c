#include <stdio.h>
int main(){
    float altura;
    char y;
    printf("Digite o sexo [M/F]: ");
    scanf("%c", &y);
  if(y == 'F' || y == 'M'){
    printf("Digite a altura: ");
    scanf("%f", &altura);
    if(y == 'M'){
      printf("72.7 x %.1f - 58 = %.1f",altura, 72.7 * altura - 58);
    }
    else if (y == 'F'){
      printf("62.1 x %.1f - 44.7 = %.1f",altura, 62.1 * altura - 44.7);
    }
    } else {
    printf("Erro nos dados inseridos");
    }
    return 0;
}