#include <stdio.h>
#include <string.h>

int main() {
  char x1[20];
  char x2;
  int cont=0;
  puts("Digite um caracter: ");
  scanf("%c", &x2); 
  puts("Digite uma palavra: ");
  scanf("%s", x1);

  for(int i=0; i<=strlen(x1); i++){
    if (x1[i] == x2){
      cont += 1;  
    }
  }
  printf("Possui o caracter '%c' %d vezes na string '%s'.", x2, cont, x1);
  return 0;
}