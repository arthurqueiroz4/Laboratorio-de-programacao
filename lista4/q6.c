#include <stdio.h>
#define TAM 5

void str();

int main()
{
    str();
    return 0;
}

void str(){
    char *str1;
    char *str2;
    str1 = malloc(10 * sizeof(char));
    puts("Digite a primeira string: ");
    scanf("%s", str1);
    str2 = str1;
    puts(str2);
}
